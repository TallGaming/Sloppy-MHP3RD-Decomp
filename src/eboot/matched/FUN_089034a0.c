/*
 * FUN_089034a0: update one indexed 80-byte entry and clear an object flag.
 *
 * The object and entry layouts are hypotheses inferred from address arithmetic.
 */
typedef unsigned char u8;
typedef unsigned int u32;

struct Entry089034a0 {
    u8 unknown00[80];
};

struct Object089034a0 {
    u8 unknown00[160];
    struct Entry089034a0 entries[2];
    u32 flag140;
};

extern void FUN_089033fc(struct Entry089034a0 *entry, void *value1, void *value2);

void FUN_089034a0(struct Object089034a0 *object, int index,
                  void *value1, void *value2)
{
    FUN_089033fc(&object->entries[index], value1, value2);
    object->flag140 = 0;
}
