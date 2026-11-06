/*
 * FUN_088ed594: read word 0x54 while holding the lock at 0x09BE9F24.
 *
 * Main EBOOT, G2 high-address slice. The record and lock types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088ec504(void *lock);
void FUN_088ec518(void *lock);

u32 FUN_088ed594(void *record)
{
    u32 value;

    FUN_088ec504((void *)0x09be9f24);
    value = FIELD(record, u32, 0x54);
    FUN_088ec518((void *)0x09be9f24);
    return value;
}
