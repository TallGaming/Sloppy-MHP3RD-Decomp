/*
 * Purpose: retain the supported field and ABI view for FUN_0883eac8.
 * This uncompiled recovery note is not a whole matching candidate.
 */
typedef unsigned char u8;
typedef struct __attribute__((packed)) PackedRecord { u8 data[12]; } PackedRecord;

typedef struct Entity {
    u8 before_index[0x62]; u8 index;
    u8 before_record[0x478 - 0x63]; PackedRecord record;
    u8 before_lookup1[0x5a9 - 0x484];
    u8 lookup1; u8 lookup2; u8 callback_result;
} Entity;

extern void *D_08a3345c;
extern u8 FUN_0885bbfc(void *service, int value);
extern u8 FUN_0885c858(void *service, u8 index);
extern u8 FUN_0885c878(void *service, u8 index);
extern u8 FUN_0885c7bc(void *service, const PackedRecord *record);

/*
 * Artificial flow proves the stored values and argument lanes below.
 */
void FUN_0883eac8_field_view(void *unused, Entity *entity, const PackedRecord *source)
{
    void *service = D_08a3345c;
    u8 index;

    entity->record = *source;
    index = FUN_0885bbfc(service, entity->record.data[1]);
    entity->index = index;
    entity->lookup1 = FUN_0885c858(service, index);
    entity->lookup2 = FUN_0885c878(service, index);
    entity->callback_result = FUN_0885c7bc(service, &entity->record);
}
