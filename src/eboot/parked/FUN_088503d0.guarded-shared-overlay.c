/* Publish a temporary resource and draw the three fixed overlay elements. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;

struct Overlay088503d0 {
    u8 prefix[0x18c];
    u8 payload[0x24];
    u8 batch_start[0x20];
    const void *resource;
    u8 batch_tail[0x168 - 0x48];
    u8 main_record[0x24];
    u16 first_record[0x12];
    u16 second_record[0x12];
};

extern void *D_09beb0bc;
extern struct Overlay088503d0 D_08974e68;
extern const u8 D_0896b3f8[];

extern void FUN_08900bf0(void *, const void *, const void *, int, int, s16, s16, int);
extern void FUN_088ff8f0(void *, const void *, const void *, int, s16, s16, int, int, int, int);
extern void FUN_08904570(void *, u16 *, int, u8, const void *, s16, s16, int, u8);

void FUN_088503d0(void *unused, int first_value, int second_value)
{
    const void *resource;

    resource = D_0896b3f8;
    D_08974e68.resource = &resource;
    FUN_08900bf0(D_09beb0bc, D_08974e68.batch_start, D_08974e68.payload, 9, 0, 0, 0, 0);
    if (first_value || second_value)
        FUN_088ff8f0(D_09beb0bc, D_08974e68.main_record, D_08974e68.payload, 0, 0, 0, 0, -1, -1, 0);
    if (first_value)
        FUN_08904570(D_09beb0bc, D_08974e68.first_record, first_value, 0, D_08974e68.payload, 0, 0, 0, 0);
    if (second_value)
        FUN_08904570(D_09beb0bc, D_08974e68.second_record, second_value, 0, D_08974e68.payload, 0, 0, 0, 0);
}

