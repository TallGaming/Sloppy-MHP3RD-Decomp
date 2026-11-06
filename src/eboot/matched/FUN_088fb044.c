/*
 * FUN_088fb044: store seven settings in an object.
 *
 * Main EBOOT, match slice 7 (small straight-line leaf functions, part 2). Names and types are hypotheses.
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

void FUN_088fb044(u8 *object, u8 a, u8 b, s32 c, u8 d, u8 e, u8 f, u8 g)
{
    object[4] = a;
    object[5] = b;
    FIELD(object, s32, 12) = c;
    object[6] = d;
    object[7] = e;
    object[8] = f;
    object[9] = g;
}
