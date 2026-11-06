/* Purpose: invoke the record-membership classifier and consume its scan span. */
typedef unsigned char u8;

struct TypeRecord0883e1f0 {
    u8 leading[15];
    u8 kind;
    u8 between_kind_and_scan[4];
    u8 scan_bytes[4];
};

extern int FUN_0883d290(void *context, const u8 *membership_record,
                        const struct TypeRecord0883e1f0 *type_record);

void FUN_0883e1f0(void *context, const u8 *membership_record,
                   const struct TypeRecord0883e1f0 *type_record)
{
    int index;
    int scan_count = FUN_0883d290(context, membership_record, type_record);

    for (index = 0; index < scan_count; index++) {
        type_record->scan_bytes[index];
    }
}
