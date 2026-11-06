/*
 * FUN_088db814: set word 8 and half-word 0xC of entry INDEX.
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

void FUN_088db814(u8 *rec, s32 index, s16 half, s32 word)
{
    /* Match note: byte arithmetic (index * 16 + 0x48) gives the reference
     * address order; &rec->entries[index] adds 0x48 first. */
    struct Entry_088db814 *entry = (struct Entry_088db814 *)(rec + index * 16 + 0x48);

    entry->half_0c = half;
    entry->word_08 = word;
}
