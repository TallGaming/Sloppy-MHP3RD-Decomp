typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

struct Data_0882b160
{
    u32 word_00;
    u32 word_04;
    u8 pad_08[0x14 - 8];
    u16 half_14;
    u16 half_16;
};

extern struct Data_0882b160 D_09bb7a64;
extern void *D_09bb7b60;
s32 FUN_088be0b4(void *object);

void FUN_0882b160(u8 *state)
{
    if (FUN_088be0b4(D_09bb7b60) == 0)
    {
        u8 *record = FIELD(state, u8 *, 0xde4);
        struct Data_0882b160 *data = &D_09bb7a64;

        if (record[0x504] == 0)
        {
            FIELD(state, u16, 0xdd0) = data->word_00;
            FIELD(state, u16, 0xdd2) = data->word_04;
            FIELD(state, u16, 0xdd6) = data->half_14;
            FIELD(state, u16, 0xdd8) = data->half_16;
            return;
        }
    }

    FIELD(state, volatile u16, 0xdd6) = 0;
    FIELD(state, volatile u16, 0xdd4) = 0;
    FIELD(state, volatile u16, 0xdd2) = 0;
    FIELD(state, volatile u16, 0xdd0) = 0;
    FIELD(state, volatile u16, 0xdd8) = 0;
}
