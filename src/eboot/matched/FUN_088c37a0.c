/*
 * FUN_088c37a0: store a 16-bit value in half_10 of entry INDEX.
 *
 * Main EBOOT, plan step 4 (retry of older parked functions under GCC 4.0.4x). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: an array of 20-byte entries at offset 0x18 (as FUN_088c37ec). */
struct Entry_088c3768
{
    s32 word_00;
    s32 word_04;
    s32 word_08;
    s16 half_0c;
    s16 half_0e;
    s16 half_10;
    u16 half_12;
};
struct Rec_088c3768
{
    u8 unknown_00[0x18];
    struct Entry_088c3768 entries[1];
};

void FUN_088c37a0(struct Rec_088c3768 *rec, s32 index, s16 value)
{
    rec->entries[index].half_10 = value;
}
