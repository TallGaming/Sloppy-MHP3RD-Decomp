/*
 * FUN_088c3908: return half_10 of entry INDEX.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: an array of 20-byte entries at offset 0x18. */
struct Entry_088c37ec
{
    s32 word_00;
    s32 word_04;
    s32 word_08;
    u16 half_0c;
    s16 half_0e;
    s16 half_10;
    u16 half_12;
};
struct Rec_088c37ec
{
    u8 unknown_00[0x18];
    struct Entry_088c37ec entries[1];
};

u16 FUN_088c3908(struct Rec_088c37ec *rec, s32 index)
{
    return rec->entries[index].half_10;
}
