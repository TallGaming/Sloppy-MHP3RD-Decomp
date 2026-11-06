/*
 * Purpose: field view for FUN_088420e4.
 *
 * The target initializes the supplied record, delegates its nested record at
 * +0x14, and conditionally initializes the pair at +0x7c.  The nested helper
 * remains PARKED, so this is intentionally an uncompiled partial candidate.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

struct GlobalRecord_088420e4 {
    void *source;
    s32 *table;
    u8 unknown_8[6];
    u8 flag_e;
    u8 unknown_f;
    s32 pair_value_10;
};

struct Pair_088420e4 {
    u16 count;
    u16 unknown_2;
    s32 value;
};

extern struct GlobalRecord_088420e4 D_0896e2e0;
extern void FUN_089031fc(void *record, void *source, s32 *table);
extern void FUN_0883bab8(void *unused, struct Pair_088420e4 *pair, s32 value);

s32 FUN_088420e4(u8 *record)
{
    record[1] = 0;
    record[2] = 0;
    record[8] = 0;
    record[9] = 0;
    FUN_089031fc(record + 0x14, D_0896e2e0.source, D_0896e2e0.table);
    record[0] = 1;
    *(u16 *)(record + 4) = 0;
    *(u16 *)(record + 6) = 0;
    *(s32 *)(record + 12) = 0;
    *(u16 *)(record + 10) = D_0896e2e0.flag_e;
    *(s32 *)(record + 0x78) = 0;
    *(s32 *)(record + 0x10) = 0;
    if (D_0896e2e0.pair_value_10 != 0) {
        FUN_0883bab8(0, (struct Pair_088420e4 *)(record + 0x7c),
                      D_0896e2e0.pair_value_10);
    }
    return 0;
}
