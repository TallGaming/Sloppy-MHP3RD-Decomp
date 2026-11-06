/*
 * FUN_0882a34c: store three settings in a large record.
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

/* Hypothesis: field names are inventions; only offsets and widths are known. */
struct Rec_0882a34c
{
    u8 unknown_000[0xdda];
    u8 byte_dda;
    u8 unknown_ddb;
    s32 word_ddc;
    u8 byte_de0;
};

void FUN_0882a34c(struct Rec_0882a34c *rec, u8 a, s32 b, u8 c)
{
    rec->byte_de0 = a;
    rec->word_ddc = b;
    rec->byte_dda = c;
}
