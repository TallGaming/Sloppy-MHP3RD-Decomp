/*
 * FUN_0889c0dc: return the address at the offset stored at 0x34, relative to the record.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 1). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Rec_0889c0dc
{
    u8 unknown_00[0x34];
    s32 offset_34;
};

void *FUN_0889c0dc(struct Rec_0889c0dc *rec)
{
    /* Match note: a struct member (not FIELD) gives the reference operand order. */
    return (u8 *)rec + rec->offset_34;
}
