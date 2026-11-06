/*
 * FUN_088ec574: stop the object at offset 8 and clear two state words.
 *
 * Main EBOOT, G2 high-address slice. The record layout and types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_08960f70(void *object, int mode);

void FUN_088ec574(void *record)
{
    FUN_08960f70(FIELD(record, void *, 8), 0);
    /* Match shape: this source order gives the reference's 0x4c/0x48 store order. */
    FIELD(record, u32, 0x48) = 0;
    FIELD(record, u32, 0x4c) = 0;
}
