/*
 * Purpose: typed readable partial for FUN_08818d14 (0x08818d14, 180 bytes).
 *
 * Identity: GCC 4.0.4 libsupc++/eh_personality.cc static get_ttype_entry.
 * The complete public personality TU and exact unwind-pe ABI are unavailable,
 * so this is intentionally uncompiled and does not claim an exact match.
 */
typedef unsigned int uptr;
typedef unsigned char u8;

struct lsda_header_info {
    uptr start;
    uptr landing_pad_start;
    uptr ttype_base;            /* +0x08 */
    const u8 *ttype;            /* +0x0c */
    const u8 *action_table;
    u8 ttype_encoding;          /* +0x14 */
    u8 call_site_encoding;
};

extern unsigned int size_of_encoded_value(u8 encoding);
extern const u8 *read_encoded_value_with_base(u8 encoding, uptr base,
                                              const u8 *p, uptr *out);

/* Returned value is a std::type_info pointer in the original C++ source. */
static const void *FUN_08818d14_get_ttype_entry_partial(
    const struct lsda_header_info *info, unsigned int index)
{
    uptr decoded_pointer;
    unsigned int entry_width = size_of_encoded_value(info->ttype_encoding);
    const u8 *entry = info->ttype - index * entry_width;

    read_encoded_value_with_base(info->ttype_encoding, info->ttype_base,
                                 entry, &decoded_pointer);
    return (const void *)decoded_pointer;
}
