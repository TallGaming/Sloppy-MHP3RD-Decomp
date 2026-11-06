/*
 * FUN_0882a190: invoke an object method and update a destination part on
 * success. Names and types are hypotheses unless stated.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

typedef s32 (*Method_0882a190)(void *object);

struct Part_0882a190
{
    u8 pad_00[0x80];
    u16 value_80;
    u8 pad_82[7];
    u8 zero_89;
};

void FUN_0882a190(u8 *dest, u8 *object)
{
    Method_0882a190 method = FIELD(*(u8 **)object, Method_0882a190, 0x134);

    if (method(object) != 0)
    {
        struct Part_0882a190 *part =
            (struct Part_0882a190 *)(dest + 0x150);
        u32 value = FIELD(object, u32, 0x74);
        part->zero_89 = 0;
        part->value_80 = value + 0x2000;
        dest[0x14] = 2;
    }
}
