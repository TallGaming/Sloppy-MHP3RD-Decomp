/* Purpose: select the packed index low nibble for selector 101, else look up a byte. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct SelectorForwardRecord {
    u8 reserved;
    u8 selector;
    u16 index;
} SelectorForwardRecord;

extern u8 FUN_0885b8cc(void *unused, u8 selector, u16 index);

u32 FUN_0885bba8(void *unused, const SelectorForwardRecord *record) {
    if (record->selector == 101) {
        return record->index & 15;
    }
    return FUN_0885b8cc(unused, record->selector, record->index);
}
