/*
 * Purpose: store a word and a status byte in parallel tables.
 * Hypothesis: both tables belong to the same large state object.
 *
 * Attempt 1: direct table expressions use the normal GCC large-offset form.
 * Attempt 2: typed table offsets retain that form and a different address
 * calculation order.
 *
 * Blocker: the reference materializes 0x9a78 and 0x9aac with zero-based ori
 * instructions before adding the base; GCC 4.0.4 uses a lui plus negative
 * displacement. Revisit with a supported global address-legitimization rule.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

void FUN_088ce770(void *state, u32 value, u8 status, u8 index) {
    u16 status_offset = 0x9AAC;
    u16 value_offset = 0x9A78;
    u8 *status_table = (u8 *)state + status_offset;
    u32 *value_table = (u32 *)((u8 *)state + value_offset);

    value_table[index] = value;
    status_table[index] = status;
}
