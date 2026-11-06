/* FUN_08905a8c: advance a timed message stream and update its completion flags.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 3. Flag meanings are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern int _DAT_09be9f18, _DAT_09bb7e78;
int FUN_088e9954(int, int, char *, int, char *);
void FUN_088c926c();

int FUN_08905a8c(int *state, int message, u32 budget, int mode, int allow_wait)
{
    char glyph[2];
    char next[4];
    u32 consumed = 0;
    short offset = 0;

    if (mode == 3) {
        ((u8 *)state)[4] = 0x10;
        return 0;
    }
    if (mode == 4) {
        ((u8 *)state)[4] = 0x20;
        return 0;
    }
    if (budget < (u32)state[2] || message != state[0]) {
        *(short *)((char *)state + 6) = 0;
        ((u8 *)state)[12] = 0;
    }
    state[2] = budget;
    ((u8 *)state)[4] = 1;
    state[0] = message;

    for (;;) {
        int kind = FUN_088e9954(_DAT_09be9f18, offset, glyph, message, next);
        if (kind == 4) {
            break;
        }
        for (;;) {
            u32 cost;
            short code;
            offset++;
            if (glyph[0] == '\n') {
                break;
            }
            consumed++;
            if (kind == 1) {
                code = (short)(((u8)glyph[0] << 8) | (u8)glyph[1]);
                if (code == (short)0x8142 || code == (short)0x8148) {
                    cost = 8;
                } else if (code == (short)0x8141) {
                    cost = 3;
                } else {
                    cost = 0xf;
                    if (budget < cost) {
                        goto finished_page;
                    }
                }
            } else {
                if (kind == 0 && (glyph[0] == '.' || glyph[0] == '?')) {
                    cost = 0xf;
                    if (budget < cost) {
                        goto finished_page;
                    }
                } else {
                    cost = 3;
                }
            }
            if (budget < cost) {
                goto finished_page;
            }
            budget -= cost;
            kind = FUN_088e9954(_DAT_09be9f18, offset, glyph, message, next);
            if (kind == 4) {
                goto message_end;
            }
        }
    }

message_end:
    if ((u32)(int)*(short *)((char *)state + 6) < consumed) {
        FUN_088c926c(_DAT_09bb7e78, 0, 0x21, 0, 5, -1, -1, 0, 0, 0);
    }
    *(short *)((char *)state + 6) = (short)consumed;
    if (mode == 1) {
        u8 flags = ((u8 *)state)[4];
        ((u8 *)state)[4] = flags | 2;
        if (allow_wait == 0) {
            ((u8 *)state)[4] = flags | 6;
        }
    } else if (mode == 2) {
        ((u8 *)state)[4] |= 8;
        if (((char *)state)[12] == 0) {
            ((u8 *)state)[12] = 1;
            FUN_088c926c(_DAT_09bb7e78, 0, 0x22, 0, 5, -1, -1, 0, 0, 0);
        }
    }
    return 0;

finished_page:
    if ((u32)(int)*(short *)((char *)state + 6) < consumed) {
        FUN_088c926c(_DAT_09bb7e78, 0, 0x21, 0, 5, -1, -1, 0, 0, 0);
    }
    *(short *)((char *)state + 6) = (short)consumed;
    return 1;
}
