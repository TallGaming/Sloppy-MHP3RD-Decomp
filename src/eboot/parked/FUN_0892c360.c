/* FUN_0892c360: reset a menu state and select its active data source.
 * Main EBOOT, attempt-high-01 241-512 byte batch 14. State roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u8 *D_08aace80;
extern u8 *D_08ab1568;

void FUN_088ebb10(void *, int, int);
void FUN_0887f660(void *, int);
void FUN_0887f73c(void *, int, int, int);
void FUN_0891fac4(void *);
void FUN_08920be0(void *, void *, int);
void FUN_089031e8(void *, int);
void FUN_088fb314(void *, int);
void FUN_0892c314(void);
void FUN_089202d4(void *, int);
void FUN_08920290(void *, int);
int FUN_0886cae0(void *, int);

int FUN_0892c360(u8 *state)
{
    int source;

    FUN_088ebb10(state + 0x61c, 0, 0x4c);
    state[0x1c0] = 0;
    state[0x1c3] = 0;
    state[0x577] = 0;
    FUN_0887f660(D_08ab1568, 0);
    state[0x627] = D_08ab1568[0];
    if ((state[0x627] & 1) != 0) {
        FUN_0887f73c(D_08ab1568, 0, 3, 1);
    }
    state[0x626] = 8;
    *(int *)(state + 0x61c) = 8;
    state[0x62f] = 9;
    *(u16 *)(state + 0x622) = 0;
    state[0x62e] = 0;
    FUN_0891fac4(state);
    FUN_08920be0(state, state + 0x61c, 1);
    FUN_089031e8(state + 0x35c, 1);
    FUN_088fb314(state + 0x35c, 0);
    state[0x4bc] = 0xff;
    state[0x1c5] = 2;
    state[0x4b6] = 1;
    state[0x15] = 2;
    state[0x1c6] = 0;
    state[0x579] = 0;
    FUN_0892c314();
    if ((*(u32 *)(D_08aace80 + 0x60474) & 0x200) == 0) {
        source = (int)(D_08aace80 + 0x5014);
    } else {
        source = FUN_0886cae0(D_08aace80, 0);
    }
    state[0x576] = 1;
    FUN_089202d4(state, source);
    FUN_08920290(state, (signed char)state[0x627]);
    *(u16 *)(state + 0x668) = 0;
    return 1;
}
