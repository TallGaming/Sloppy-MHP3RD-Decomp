/* Update nine descriptor attributes, then submit the static render batch. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;

struct BatchRecord08851b00 {
    u8 prefix[0x12];
    u8 attribute;
    u8 before_resource[0x20 - 0x13];
    const void *resource;
};

struct BatchState08851b00 {
    struct BatchRecord08851b00 records[16];
    u8 between[0x384 - 16 * 0x24];
    u16 final_record[0x12];
};

extern void *D_09beb0bc;
extern struct BatchState08851b00 D_0896ffcc;
extern const u8 D_0896b3f8[];

extern void FUN_08900bf0(void *, const void *, const void *, int, int, s16, s16, int);
extern void FUN_08904570(void *, u16 *, int, u8, const void *, s16, s16, int, u8);

void FUN_08851b00(void *unused, int value, const void *payload, int enabled)
{
    const void *resource;
    int index;

    resource = D_0896b3f8;
    D_0896ffcc.records[3].resource = &resource;
    D_0896ffcc.records[4].resource = &resource;
    for (index = 0; index < 9; ++index)
        D_0896ffcc.records[index].attribute = enabled ? 24 : 0;
    FUN_08900bf0(D_09beb0bc, D_0896ffcc.records, payload, 16, 0, 0, 0, 0);
    FUN_08904570(D_09beb0bc, D_0896ffcc.final_record, value, 11, payload, 0, 0, 0, 0);
}

