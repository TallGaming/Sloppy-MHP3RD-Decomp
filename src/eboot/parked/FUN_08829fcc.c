typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern u16 D_0896c6a0[];
s32 FUN_088a0030(void *source);

void FUN_08829fcc(u8 *dest, s32 code, u8 *source, u8 kind)
{
    if (FUN_088a0030(source) != 0)
    {
        s32 word_80;
        s32 word_84;
        s32 word_88;
        s32 word_8c;
        u16 table_value;

        dest[0xe20] = 1;
        dest[0xe21] = code;
        word_8c = FIELD(source, s32, 0x8c);
        word_80 = FIELD(source, s32, 0x80);
        word_88 = FIELD(source, s32, 0x88);
        table_value = D_0896c6a0[code & 0x2f];
        word_84 = FIELD(source, s32, 0x84);
        dest[0xe24] = kind;
        FIELD(dest, u16, 0xe22) = table_value;
        FIELD(dest, s32, 0xe10) = word_80;
        FIELD(dest, s32, 0xe14) = word_84;
        FIELD(dest, s32, 0xe18) = word_88;
        FIELD(dest, s32, 0xe1c) = word_8c;
    }
}
