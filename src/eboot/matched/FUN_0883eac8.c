/* Purpose: copy a possibly unaligned selector record and refresh the entity's lookup fields. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct SelectorObject0885c7bc {
    u8 field_00;
    u8 selector;
    u16 index;
};

union SelectorRecord0883eac8 {
    struct SelectorObject0885c7bc selector;
    u32 words[3];
};

struct UnalignedSource0883eac8 {
    union SelectorRecord0883eac8 record;
} __attribute__((packed));

struct Entity0883eac8 {
    u8 before_index[0x62];
    u8 index;
    u8 before_record[0x478 - 0x63];
    union SelectorRecord0883eac8 record;
    u8 before_lookup[0x5a9 - 0x484];
    u8 first_lookup;
    u8 second_lookup;
    u8 record_field;
};

extern void *D_08a3345c;
extern u8 FUN_0885bbfc(void *context, int value);
extern u8 FUN_0885c858(void *context, u8 index);
extern u8 FUN_0885c878(void *context, u8 index);
extern u8 FUN_0885c7bc(void *context, const struct SelectorObject0885c7bc *object);

void FUN_0883eac8(void *unused, struct Entity0883eac8 *entity,
                 const struct UnalignedSource0883eac8 *source)
{
    entity->record = source->record;
    entity->index = FUN_0885bbfc(D_08a3345c, entity->record.selector.selector);
    entity->first_lookup = FUN_0885c858(D_08a3345c, entity->index);
    entity->second_lookup = FUN_0885c878(D_08a3345c, entity->index);
    entity->record_field = FUN_0885c7bc(D_08a3345c, &entity->record.selector);
}
