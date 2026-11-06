/*
 * FUN_088a48f8: return word [ROW][COLUMN] of the 3-column table D_089efbec.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern const s32 D_089efbec[][3];

s32 FUN_088a48f8(void *unused, u16 column, u16 row)
{
    return D_089efbec[row][column];
}
