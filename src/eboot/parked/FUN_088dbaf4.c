/*
 * FUN_088dbaf4: call FUN_088ed584 on the object of entry INDEX.
 *
 * Main EBOOT, match slice 5 (tiny functions that call others). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: a table of 36-byte entries whose first word is an object. */
struct Entry_088dbaf4
{
    void *object;
    u8 unknown_04[32];
};
void FUN_088ed584(void *object, s32 value);

void FUN_088dbaf4(struct Entry_088dbaf4 *entries, s32 index, s32 value)
{
    FUN_088ed584(entries[index].object, value);
}
