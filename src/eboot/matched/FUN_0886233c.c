/*
 * FUN_0886233c: set the two 16-bit key halves from a 32-bit seed; a zero half gets a default.
 *
 * Main EBOOT, plan step 4 (retry of older parked functions under GCC 4.0.4x). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: an archive key with two 16-bit halves (see docs/ARCHIVE_FORMAT.md). */
struct Key_0886233c
{
    u32 low;
    u32 high;
};
struct Rec_0886233c
{
    u8 unknown_00000[0x2f53c];
    struct Key_0886233c key;
};

void FUN_0886233c(struct Rec_0886233c *rec, u32 seed)
{
    rec->key.low = seed & 0xffff;
    rec->key.high = seed >> 16;
    if (rec->key.low == 0)
        rec->key.low = 32653;
    if (rec->key.high == 0)
        rec->key.high = 9029;
}
