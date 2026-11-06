/*
 * Purpose hypothesis: count enabled keys using the state's byte-sized slot
 * index and a separately maintained key offset.
 */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned int u32;

extern unsigned char *D_09bf5250;
extern int FUN_08830550(const s8 *values);

int FUN_08839220(void)
{
    u8 index;
    u32 key_offset;
    int count;

    count = 0;
    key_offset = 0x1140;
    for (index = 0; index != 4; ++index) {
        if (FUN_08830550((const s8 *)(D_09bf5250 + key_offset)))
            ++count;
        key_offset += 0x90;
    }
    return count;
}
