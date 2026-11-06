/* Purpose: initialize the record and its optional pair from the shared descriptor. */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;

struct Pair_0883bab8 {
    u16 count_0;
    u16 unknown_2;
    int value_4;
};

struct Record088420e4 {
    u8 active;
    u8 field_01;
    u8 field_02;
    u8 field_03;
    u16 field_04;
    u16 field_06;
    u8 field_08;
    u8 field_09;
    short mode;
    int field_0c;
    int field_10;
    u8 nested[0x60];
    struct Pair_0883bab8 pair;
};

struct GlobalRecord088420e4 {
    void *source;
    int *table;
    u8 field_08[6];
    s8 mode;
    u8 field_0f;
    int pair_value;
};

extern struct GlobalRecord088420e4 D_0896e2e0;
extern void FUN_089031fc(void *record, void *source, int *table);
extern void FUN_0883bab8(void *unused, struct Pair_0883bab8 *pair, int value);

void FUN_088420e4(struct Record088420e4 *record)
{
    record->field_01 = 0;
    record->field_02 = 0;
    record->field_08 = 0;
    record->field_09 = 0;
    FUN_089031fc(record->nested, D_0896e2e0.source, D_0896e2e0.table);
    record->active = 1;
    record->field_04 = 0;
    record->field_06 = 0;
    record->field_0c = 0;
    record->mode = D_0896e2e0.mode;
    record->pair.value_4 = 0;
    record->field_10 = 0;
    if (D_0896e2e0.pair_value != 0)
        FUN_0883bab8(0, &record->pair, D_0896e2e0.pair_value);
}
