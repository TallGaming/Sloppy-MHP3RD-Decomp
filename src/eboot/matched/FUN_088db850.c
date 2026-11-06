/*
 * FUN_088db850: return word 0 of entry INDEX.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: an array of 16-byte entries at offset 0x48. */
struct Entry_088db814
{
    s32 word_00;
    s32 word_04;
    s32 word_08;
    s16 half_0c;
    u16 unknown_0e;
};
struct Rec_088db814
{
    u8 unknown_00[0x48];
    struct Entry_088db814 entries[1];
};

s32 FUN_088db850(struct Rec_088db814 *rec, s32 index)
{
    return rec->entries[index].word_00;
}
