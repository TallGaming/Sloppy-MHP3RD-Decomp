/*
 * FUN_088ed640: release state 6 and clear the three state words.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The record layout is a hypothesis.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088ec528(void *record);

void FUN_088ed640(void *record)
{
    if (*(u32 *)((u8 *)record + 0x54) == 6) {
        FUN_088ec528(record);
        /* Match shape: this source order gives the reference's three stores. */
        *(u32 *)((u8 *)record + 0x54) = 0;
        *(u32 *)((u8 *)record + 0x58) = 0;
        *(u32 *)((u8 *)record + 0x5c) = 0;
    }
}
