/*
 * FUN_088a0150: fetch an indexed virtual record and copy its three values.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: load/store order and index-width forms remain one instruction short.
 */

typedef unsigned char u8;
typedef short s16;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef u32 (*Method0)(void *);
void *FUN_088791d4(u32, int);

void FUN_088a0150(u8 *object, u32 *output, s16 index)
{
    void **methods = *(void ***)object;
    u32 value = ((Method0)methods[0x11])(object);
    u8 *entry = FUN_088791d4(value, index);
    u32 first = FIELD(entry, u32, 0x1a0);
    u32 second = FIELD(entry, u32, 0x1a4);
    u32 third = FIELD(entry, u32, 0x1a8);

    output[2] = third;
    output[0] = first;
    output[1] = second;
}
