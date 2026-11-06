/* Purpose: reset and seed the state for a large streaming resource table. */
extern unsigned char D_08966e64[];
extern unsigned char D_08966e74[];
extern void FUN_0880c468(void *, int, int);
extern void FUN_08960fc8(void *);

void FUN_0888d128(unsigned char *state)
{
    FUN_0880c468(state + 0x18, 0, 0x600);
    FUN_0880c468(state + 0x25a8, 0, 0x24);
    FUN_0880c468(state + 0x25d0, 0, 0x12c0);
    FUN_0880c468(state + 0x6450, 0, 0x48);
    *(int *)(state + 0x18) = 0x600;
    *(int *)(state + 0x24) = 0x32;
    *(int *)(state + 0x28) = 0x34;
    *(int *)(state + 0x2c) = 0x33;
    *(int *)(state + 0x30) = 0x29;
    *(int *)(state + 0x48) = 12;
    *(unsigned int *)(state + 0x54) = *(unsigned int *)D_08966e74;
    *(unsigned int *)(state + 0x58) = *(unsigned int *)(D_08966e74 + 4);
    *(unsigned int *)(state + 0x5c) = *(unsigned int *)(D_08966e74 + 8);
    state[0x60] = D_08966e74[12];
    state[0x64] = D_08966e64[0];
    state[0x65] = D_08966e64[1];
    state[0x66] = D_08966e64[2];
    *(int *)(state + 0x610) = (int)(state + 0x25a8);
    *(int *)(state + 0x25a8) = 0;
    *(int *)(state + 0x25ac) = 200;
    *(int *)(state + 0x25b0) = 3;
    *(int *)(state + 0x25c0) = 0;
    *(int *)(state + 0x25c4) = (int)(state + 0x25d0);
    *(int *)(state + 0x25c8) = (int)(state + 0x6450);
    FUN_08960fc8(state + 0x18);
    state[0x1450] = 1;
}
