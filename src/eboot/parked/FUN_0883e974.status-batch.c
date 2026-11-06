/* Purpose: query seven keys, write their positive-result flags, and initialize the record on success. */
typedef unsigned char u8;
typedef unsigned short u16;

struct StatusRecord0883e974 {
    u16 value;
    u8 kind;
    u8 selector;
    u8 field_04;
    u8 field_05;
    u8 field_06;
    u8 flags[7];
};

extern void *D_08a3345c;
extern int FUN_0885cafc(void *context, const u8 *key, u8 selector);

int FUN_0883e974(void *unused, const u8 *keys, struct StatusRecord0883e974 *record)
{
    int result;

    record->flags[0] = FUN_0885cafc(D_08a3345c, keys + 1144, record->selector) > 0;
    record->flags[1] = FUN_0885cafc(D_08a3345c, keys + 1232, record->selector) > 0;
    record->flags[2] = FUN_0885cafc(D_08a3345c, keys + 1168, record->selector) > 0;
    record->flags[3] = FUN_0885cafc(D_08a3345c, keys + 1184, record->selector) > 0;
    record->flags[4] = FUN_0885cafc(D_08a3345c, keys + 1200, record->selector) > 0;
    record->flags[5] = FUN_0885cafc(D_08a3345c, keys + 1216, record->selector) > 0;
    record->flags[6] = FUN_0885cafc(D_08a3345c, keys + 1156, record->selector) > 0;

    result = record->flags[0] | record->flags[1] | record->flags[2] |
             record->flags[3] | record->flags[4] | record->flags[5] | record->flags[6];
    if (result) {
        record->kind = 130;
        record->value = 0;
        record->field_05 = 0;
        record->field_06 = 0;
        result = 1;
    }
    return result;
}
