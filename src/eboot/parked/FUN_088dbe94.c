/*
 * FUN_088dbe94: store a word at 0x150 of the object of entry INDEX, then call FUN_088ed89c on it.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* The record layout is unknown: FIELD reads or writes a member of the given
 * type at a byte offset. Offsets and widths come from the reference code. */
#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

/* Hypothesis: a table of 36-byte entries whose first word is an object. */
struct Entry_088dbaf4
{
    void *object;
    u8 unknown_04[32];
};
void FUN_088ed89c(void *object);

void FUN_088dbe94(struct Entry_088dbaf4 *entries, s32 index, s32 value)
{
    void *object = entries[index].object;

    FIELD(object, s32, 0x150) = value;
    FUN_088ed89c(object);
}
