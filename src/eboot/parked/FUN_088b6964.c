/*
 * FUN_088b6964: clear an indexed word in one of two parallel tables.
 *
 * Main EBOOT, G2 leaf-with-branches matching. Names and types are hypotheses.
 * PARKED: GCC emits index-plus-base where the reference uses base-plus-index.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

void FUN_088b6964(u8 *record, u8 index, int second_table)
{
    if (second_table == 0) {
        FIELD(record, u32, 0x98 + index * 4) = 0;
    } else {
        FIELD(record, u32, 0xb0 + index * 4) = 0;
    }
}
