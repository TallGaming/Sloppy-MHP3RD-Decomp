typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct Header {
    u16 count;
    u16 offset;
} Header;

/*
 * Purpose hypothesis: append one byte to a bounded variable-offset record.
 *
 * Parked after direct-field and explicit-local variants. GCC schedules the
 * count load and bound test before the offset calculation, while the reference
 * builds the record pointer first. Explicit locals also hoist the increments.
 * D_08a291a4 needs an absolute declaration in symbols.s before a local check
 * can resolve the error-path relocation. Revisit for a source layout that
 * preserves the reference load and increment order.
 */
extern u32 D_08a291a4;

u32 FUN_0882fed4(Header *header, u32 value)
{
    u8 *entry = (u8 *)header + header->offset + 16;

    if (header->count >= 1404) {
        D_08a291a4 = 0x8008;
        return 0x8008;
    }

    entry[8] = (u8)value;
    header->offset++;
    header->count++;
    return 0;
}
