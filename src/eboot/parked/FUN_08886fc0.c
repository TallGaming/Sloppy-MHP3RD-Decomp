/* Purpose: initialize a small connection message from one of two templates. */
extern unsigned char D_08966c5c[];
extern unsigned char D_08966c68[];
extern unsigned char D_08966c70[];
extern void FUN_08831020(void);
extern void FUN_088307e0(void *, void *);
extern void FUN_08887754(void);

void FUN_08886fc0(unsigned char *state, char alternate)
{
    unsigned char *template = alternate == 0 ? D_08966c68 : D_08966c70;

    *(unsigned int *)(state + 5) = *(unsigned int *)D_08966c5c;
    *(unsigned int *)(state + 9) = *(unsigned int *)(D_08966c5c + 4);
    state[0xd] = D_08966c5c[8];
    *(unsigned int *)(state + 0x11) = *(unsigned int *)template;
    state[0x15] = template[4];
    state[0x16] = template[5];
    state[0x19] = 0;
    FUN_08831020();
    *(unsigned int *)(state + 0x1bb8) |= 1;
    FUN_088307e0(FUN_08887754, state);
    state[4] = 1;
}
