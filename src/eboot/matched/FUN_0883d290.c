/* Purpose: classify a record kind using the verified byte membership query. */
typedef unsigned char u8;

struct TypeRecord0883d290 {
    u8 leading[15];
    u8 kind;
};

extern int FUN_088a52b0(const u8 *record, u8 value);

int FUN_0883d290(void *context, const u8 *record,
                 const struct TypeRecord0883d290 *type_record)
{
    if (type_record->kind == 4) {
        return 4;
    }
    if (type_record->kind == 2) {
        if (FUN_088a52b0(record, 146)) {
            return 3;
        }
        return 2;
    }
    if (FUN_088a52b0(record, 146)) {
        return 4;
    }
    return 3;
}
