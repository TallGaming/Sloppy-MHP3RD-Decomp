/*
 * FUN_08826e3c: store two values in a record and return the first one negated.
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

/* Hypothesis: field names and types are inventions; only offsets are known. */
struct Rec_08826e3c
{
    u8 unknown_000[0x128];
    s32 value_128;
    u8 unknown_12c[4];
    s32 value_130;
};

s32 FUN_08826e3c(struct Rec_08826e3c *rec, s32 a, s32 b)
{
    rec->value_128 = a;
    rec->value_130 = b;
    return -a;
}
