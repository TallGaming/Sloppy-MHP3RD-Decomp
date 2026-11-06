/* Purpose: rebuild the compact live-player structure from staged fields. */
extern int FUN_089611e0(void);
extern void FUN_0880c088(void *, const void *, int);

static void store_rgb(unsigned char *destination, unsigned int value)
{
    destination[0] = value;
    destination[1] = value >> 8;
    destination[2] = value >> 16;
}

void FUN_08870360(unsigned char *state)
{
    unsigned int flags = *(unsigned int *)(state + 0x38);
    int i;

    state[0x30] = 1;
    flags = (flags & 0xffff0000) |
            (state[0x877] & 1) |
            ((state[0x879] & 3) << 1) |
            ((state[0x878] & 0x1f) << 3) |
            ((state[0x87a] & 0xf) << 8) |
            ((state[0x87b] & 0xf) << 12);
    *(unsigned int *)(state + 0x38) = flags;
    store_rgb(state + 0xa8, *(unsigned int *)(state + 0x880));
    store_rgb(state + 0xab, *(unsigned int *)(state + 0x884));
    store_rgb(state + 0xae, *(unsigned int *)(state + 0x888));
    *(unsigned int *)(state + 0x44) = *(unsigned int *)(state + 0x88c);
    *(unsigned int *)(state + 0x48) = *(unsigned int *)(state + 0x890);
    FUN_0880c088(state + 0x7e, state + 0x894, 0x30);
    FUN_0880c088(state + 0x88, state + 0x8a0, 0x30);
    for (i = 0; i < 5; i++) {
        FUN_0880c088(state + 0x4c + i * 10, state + 0x8ac + i * 12, 10);
        *(unsigned int *)(state + 0x92 + i * 4) = *(unsigned int *)(state + 0x5f98c + i * 4);
    }
    state[0x3b] = state[0x5148];
    FUN_0880c088(state + 0xb1, state + 0x5d4a0, 5);
    FUN_0880c088(state + 0x3c, state + 0x590d8, 8);
    if (FUN_089611e0() == 1)
        *(unsigned int *)(state + 0x38) |= 0x400000;
    else
        *(unsigned int *)(state + 0x38) &= ~0x400000U;
}
