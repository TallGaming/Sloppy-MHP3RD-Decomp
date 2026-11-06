/*
 * FUN_088dbc38: update four 16-bit fields in one 36-byte entry.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The entry layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned short u16;

void FUN_088dbc38(u8 *entries, int index, u16 first, u16 second)
{
    u8 *entry = entries + index * 0x24;

    *(u16 *)(entry + 0x16) = first;
    *(u16 *)(entry + 0x10) = *(u16 *)(entry + 0x0c);
    *(u16 *)(entry + 0x12) = second;
    *(u16 *)(entry + 0x14) = first;
}
