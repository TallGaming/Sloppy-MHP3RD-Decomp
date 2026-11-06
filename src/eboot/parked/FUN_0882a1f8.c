typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef s32 (*Method_0882a1f8)(void *object);

struct Part_0882a1f8
{
    u8 pad_00[0x80];
    u16 value_80;
    u8 pad_82[7];
    u8 zero_89;
};

extern u8 *D_08aace80;

void FUN_0882a1f8(s8 *dest, u8 *object, u8 use_global)
{
    Method_0882a1f8 method = FIELD(*(u8 **)object, Method_0882a1f8, 0x134);

    if (method(object) != 0)
    {
        if (use_global == 0)
            goto use_object_value;
        dest[0x14] = FIELD(D_08aace80, s8, 0x5fbe2);
        return;

use_object_value:
        {
            struct Part_0882a1f8 *part =
                (struct Part_0882a1f8 *)(dest + 0x150);
            u16 value = FIELD(object, u16, 0x188);
            part->zero_89 = 0;
            part->value_80 = value - 0x8000;
            dest[0x14] = 1;
        }
    }
}
