/*
 * Partial slot-release layout for FUN_08855564.
 *
 * The observed path selects a 12-byte record using the first input pointer
 * and signed index. It compares that record's resource word with the resource
 * word in each manager row, marks the first matching row, and releases the
 * resource. It clears both leading halfwords and the resource word before
 * returning -1 on the observed paths. The path to FUN_088f2694 is unresolved.
 */
typedef unsigned short u16;
typedef unsigned int u32;

struct ResourceSlot08855564 {
    u16 state;
    u16 index;
    u32 resource;
    u32 other;
};

