/* Purpose: mirror staged player data into the live state and refresh its owner. */
extern unsigned char *D_08aace80;
extern void *D_09bb7a80;
extern void *FUN_088b51b8(void *, unsigned char, int);
extern void FUN_088a6090(void *);
extern void FUN_0880c088(void *, const void *, int);

void FUN_08866b98(void)
{
    unsigned char *state = D_08aace80;
    void *owner = FUN_088b51b8(D_09bb7a80, state[0x26], 1);

    FUN_0880c088(state + 0x5014, state + 0x602dc, 0x60);
    FUN_088a6090(owner);
    FUN_0880c088(state + 0x894, state + 0x6033c, 0x18);
    FUN_0880c088(state + 0x8ac, state + 0x60354, 0x38);
    FUN_0880c088(state + 0x5f98c, state + 0x60390, 0x14);
}
