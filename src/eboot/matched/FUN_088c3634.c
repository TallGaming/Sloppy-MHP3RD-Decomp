/*
 * FUN_088c3634: return the 32-bit word at offset 0x10 of a record.
 *
 * Main EBOOT, address 0x088C3634, 12 bytes: lw $v0, 0x10($a0); jr $ra; nop.
 * Seven direct callers. First matched as an uncredited body in bucket 3AR
 * (bench/small_leaf.c, leaf_088C3634).
 *
 * Hypothesis: the record type, its name and the field name are inventions.
 * The only observed facts are the offset (0x10), the width (32 bits) and that
 * the value is returned.
 */

typedef unsigned char u8;
typedef unsigned int u32;

/* Hypothesis: 16 unknown bytes come before the field. */
struct Record_088c3634
{
    u8 unknown_00[0x10];
    u32 value_10;
};

u32 FUN_088c3634(const struct Record_088c3634 *record)
{
    return record->value_10;
}
