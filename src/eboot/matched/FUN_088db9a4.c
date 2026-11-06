/*
 * FUN_088db9a4: return half-word 0xC of entry INDEX.
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

u16 FUN_088db9a4(struct Rec_088db814 *rec, s32 index)
{
    return (u16)rec->entries[index].half_0c;
}
