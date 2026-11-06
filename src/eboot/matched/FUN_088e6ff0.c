/*
 * FUN_088e6ff0: store a byte and a second byte that goes to two fields.
 *
 * Main EBOOT, match slice 3 (tiny leaf functions, part 2). Names and types are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Rec_088e6ff0
{
    u8 unknown_000[0x12c];
    u8 byte_12c;
    u8 byte_12d;
    u8 unknown_12e[0x167 - 0x12e];
    u8 byte_167;
};

void FUN_088e6ff0(struct Rec_088e6ff0 *rec, u8 a, s32 b)
{
    u8 second = b;

    rec->byte_12c = a;
    rec->byte_12d = second;
    rec->byte_167 = second;
}
