/*
 * FUN_088c3edc: store four 16-bit values; the last value goes to two fields.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Rec_088c3edc
{
    u8 unknown_000[0x2b4];
    s16 half_2b4;
    s16 half_2b6;
    s16 half_2b8;
    s16 half_2ba;
};

void FUN_088c3edc(struct Rec_088c3edc *rec, s16 a, s16 b, s32 c)
{
    s16 last = c;

    rec->half_2b4 = a;
    rec->half_2b6 = b;
    rec->half_2b8 = last;
    rec->half_2ba = last;
}
