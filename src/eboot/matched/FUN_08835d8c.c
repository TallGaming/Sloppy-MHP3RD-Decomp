/*
 * FUN_08835d8c: call FUN_08839f10 with 0xFFFF and the 16-bit value at offset 0x26.
 *
 * Main EBOOT, match slice 1 (tiny functions). Names and types are
 * hypotheses unless stated.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: the callee takes the record, a 16-bit value and a second 16-bit value. */
void FUN_08839f10(void *rec, s32 a, s32 b);
struct Rec_0883272c
{
    u8 unknown_00[0x26];
    u16 value_26;
};

void FUN_08835d8c(struct Rec_0883272c *rec)
{
    FUN_08839f10(rec, 0xffff, rec->value_26);
}
