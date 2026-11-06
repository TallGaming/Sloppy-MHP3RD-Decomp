/*
 * FUN_088ef960: return word 8 of an active 24-byte entry, or -1.
 *
 * Main EBOOT, G2 high-address branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned int u32;

u32 FUN_088ef960(u8 *entries, u32 index)
{
    u8 *entry = entries + (index & 0xff) * 0x18;

    if (entry[1] == 0)
        return 0xffffffff;
    return *(u32 *)(entry + 8);
}
