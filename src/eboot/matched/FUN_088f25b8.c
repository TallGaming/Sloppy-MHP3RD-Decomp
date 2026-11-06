/*
 * FUN_088f25b8: update an object, notify when either state word is set, then clear byte 0x4A.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The record fields are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

void FUN_088f2554();
void FUN_08960cc0(int value);

void FUN_088f25b8(void *record)
{
    FUN_088f2554();
    if (*(u32 *)((u8 *)record + 0x34) != 0 ||
        *(u32 *)((u8 *)record + 0x30) != 0)
        FUN_08960cc0(0);
    *(u8 *)((u8 *)record + 0x4a) = 0;
}
