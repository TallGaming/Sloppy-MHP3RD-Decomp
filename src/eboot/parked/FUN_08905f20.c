/* FUN_08905f20: render the active message page and its continue/end marker.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 3. Flag meanings are hypotheses. */
typedef unsigned char u8;
extern int _DAT_09beb0bc, _DAT_09be9f18, _DAT_08aace80;
extern int PTR_DAT_089fd410, PTR_DAT_089fd414, DAT_089fd41c;
extern int PTR_LAB_0896b428, PTR_LAB_0896b3f8;
extern int DAT_089fd088, DAT_089fcf44;
extern u8 DAT_089fd068, DAT_089fd06a, DAT_089fd06c, DAT_089fd06e;
extern int DAT_089fcf00, DAT_08969860;
void FUN_088fa2b0(); void FUN_08900bf0(); void FUN_088e6ff0();
int FUN_088fabf4(); int FUN_088e9954(); int FUN_08867d40();
void FUN_088e7008(); void FUN_088eab84(); void FUN_088eb180(); void FUN_088ea454();

void FUN_08905f20(int *state)
{
    u8 flags = ((u8 *)state)[4];
    void *value_callback;
    void *base_callback;
    int position;
    char glyph[12];
    int next_message;
    int skipped_message;

    if (flags == 0) {
        return;
    }
    if (flags & 0x10) {
        ((u8 *)state)[4] = 0;
        return;
    }
    FUN_088fa2b0(_DAT_09beb0bc, 5, 1);
    value_callback = &PTR_LAB_0896b428;
    DAT_089fd088 = (int)&value_callback;
    base_callback = &PTR_LAB_0896b3f8;
    DAT_089fcf44 = (int)&base_callback;
    FUN_08900bf0(_DAT_09beb0bc, PTR_DAT_089fd410, PTR_DAT_089fd414,
                  DAT_089fd41c, 0, 0, 0, 0);
    if ((flags & 0x20) == 0) {
        int remaining;
        int message;
        int x;
        short y;
        FUN_088e6ff0(_DAT_09be9f18,
                      (DAT_089fd06c - DAT_089fd068) & 0xff,
                      (DAT_089fd06e - DAT_089fd06a) & 0xff);
        position = FUN_088fabf4(&DAT_089fd068, &DAT_089fcf00, 0, 0);
        x = (short)position;
        y = (short)((unsigned int)position >> 16);
        remaining = *(short *)((char *)state + 6);
        message = state[0];
        while (remaining > 0) {
            short offset = 0;
            int columns = 0x16;
            int kind;
            do {
                kind = FUN_088e9954(_DAT_09be9f18, offset, glyph, message, &next_message);
                offset++;
                if (glyph[0] == '\n') {
                    break;
                }
                columns -= ((unsigned short)(kind - 1) < 2) + 1;
                remaining--;
            } while (columns > 0 && remaining > 0);
            FUN_088e7008(_DAT_09be9f18, x, y);
            FUN_088eab84(_DAT_09be9f18, offset, message);
            y += 0x10;
            message = next_message;
            if (columns == 0) {
                FUN_088e9954(_DAT_09be9f18, offset, glyph, message, &skipped_message);
                if (glyph[0] == '\n') {
                    message = skipped_message;
                }
            }
        }
        flags = ((u8 *)state)[4];
        if (flags & 2) {
            int resource = FUN_08867d40(_DAT_08aace80, (((flags & 7) >> 2) ^ 1) + 0x17);
            FUN_088eb180(_DAT_09be9f18, x, y, &DAT_08969860, resource);
            flags = ((u8 *)state)[4];
        }
        if (flags & 8) {
            int resource = FUN_08867d40(_DAT_08aace80, 0x21d);
            FUN_088ea454(_DAT_09be9f18, (short)(x + 0x70), y, 2,
                          &DAT_08969860, resource);
            ((u8 *)state)[4] = 0;
            return;
        }
    }
    ((u8 *)state)[4] = 0;
}
