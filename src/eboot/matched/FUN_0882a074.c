/*
 * FUN_0882a074: populate one destination record from a validated source.
 *
 * Names and types are hypotheses unless stated. Offsets and widths come from
 * the reference code.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

struct Vec4_0882a074
{
    s32 words[4];
};

struct Source_0882a074
{
    u8 pad_00[0x80];
    struct Vec4_0882a074 vector_80;
};

struct Dest_0882a074
{
    u8 pad_00[0xe30];
    struct Vec4_0882a074 vector_e30;
    u8 active_e40;
    u8 code_e41;
    u16 table_e42;
    u8 zero_e44;
};

extern u16 D_0896c6a0[];
s32 FUN_088a0030(struct Source_0882a074 *source);

void FUN_0882a074(struct Dest_0882a074 *dest, s32 code,
                  struct Source_0882a074 *source)
{
    if (FUN_088a0030(source) != 0)
    {
        dest->active_e40 = 1;
        dest->code_e41 = code;
        dest->vector_e30 = source->vector_80;
        dest->table_e42 = D_0896c6a0[code];
        dest->zero_e44 = 0;
    }
}
