/*
 * FUN_0887efb4: return the 20-byte entry of D_089caf8c chosen by the slot from FUN_0886cae0.
 *
 * Main EBOOT, match slice 10 (small functions with a frame, no branches, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern void * D_08aace80; /* Hypothesis: type from the access only. */
struct Entry_089caf8c
{
    u8 bytes[20];
};
extern struct Entry_089caf8c D_089caf8c[];
u16 *FUN_0886cae0(void *rec, s32 index);

void *FUN_0887efb4(void *unused, s32 index)
{
    u16 *slot = FUN_0886cae0(D_08aace80, index);

    return &D_089caf8c[*slot];
}
