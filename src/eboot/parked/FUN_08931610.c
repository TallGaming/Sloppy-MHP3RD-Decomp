/* FUN_08931610: refresh a panel label and dispatch its selected page.
 * Main EBOOT, attempt-high-01 241-512 byte batch 15. Panel roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_08aace80;

int FUN_08867d40(void *, int);
void FUN_089313a4(void *, int);
void FUN_08921720(void *);
void FUN_089214c4(void *);
void FUN_08925f78(void *);
void FUN_089246ac(void *);

void FUN_08931610(u8 *state)
{
    signed char page;
    int value;

    if ((*(u32 *)(D_08aace80 + 0x60474) & 0x200) == 0) {
        value = FUN_08867d40(D_08aace80, 0x1c9);
        FUN_089313a4(state, value);
        page = (signed char)state[0x4ba];
        if (page == 1) {
            FUN_08921720(state);
        } else if (page == 2) {
            FUN_089214c4(state);
        }
        return;
    }

    if ((signed char)state[0x4ba] == 0) {
        value = FUN_08867d40(D_08aace80, 0x1ca);
    } else {
        value = FUN_08867d40(D_08aace80, 0x1c9);
    }
    FUN_089313a4(state, value);
    page = (signed char)state[0x4ba];
    switch (page) {
    case 0:
        FUN_08925f78(state);
        break;
    case 1:
        FUN_089246ac(state);
        break;
    case 2:
        FUN_08921720(state);
        break;
    case 3:
        FUN_089214c4(state);
        break;
    }
}
