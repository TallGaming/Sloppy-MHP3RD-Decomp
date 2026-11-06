/* Purpose: alternate natural short-circuit form for the confirmed record equality behavior. */
typedef unsigned char u8;
typedef unsigned short u16;

typedef struct FUN_0883d18c_Record {
    u8 field_00;
    u8 field_01;
    u16 field_02;
    u16 field_04;
    u16 field_06;
    u16 field_08;
    u16 field_10;
} FUN_0883d18c_Record;

int FUN_0883d18c(void *context, const FUN_0883d18c_Record *left,
                 const FUN_0883d18c_Record *right)
{
    (void)context;
    if (left->field_01 != right->field_01 || left->field_02 != right->field_02 ||
        left->field_04 != right->field_04 || left->field_06 != right->field_06 ||
        left->field_08 != right->field_08 || left->field_10 != right->field_10) {
        return 0;
    }
    return 1;
}
