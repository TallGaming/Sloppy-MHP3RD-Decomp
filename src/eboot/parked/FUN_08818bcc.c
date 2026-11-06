/*
 * Purpose: readable partial for FUN_08818bcc (0x08818bcc, 328 bytes).
 *
 * Identity: GCC 4.0.4 libsupc++/eh_personality.cc static
 * parse_lsda_header(_Unwind_Context*, const unsigned char*, lsda_header_info*).
 * This is uncompiled: exact public unwind-pe headers and helper ABI bindings
 * are not present, so it is evidence of source identity rather than a match.
 */
typedef unsigned int uptr;
typedef unsigned char u8;

struct lsda_header_info {
    uptr start;                 /* +0x00 */
    uptr landing_pad_start;     /* +0x04 */
    uptr ttype_base;            /* +0x08, set by caller after parsing */
    const u8 *ttype;            /* +0x0c */
    const u8 *action_table;     /* +0x10 */
    u8 ttype_encoding;          /* +0x14 */
    u8 call_site_encoding;      /* +0x15 */
};

extern uptr unwind_get_region_start(void *context);
extern uptr base_of_encoded_value(u8 encoding, void *context);
extern const u8 *read_encoded_value_with_base(u8 encoding, uptr base,
                                              const u8 *p, uptr *out);
extern const u8 *read_uleb128(const u8 *p, uptr *out);

static const u8 *FUN_08818bcc_parse_lsda_header_partial(
    void *context, const u8 *p, struct lsda_header_info *info)
{
    uptr table_size;
    u8 lpstart_encoding;

    info->start = context ? unwind_get_region_start(context) : 0;
    lpstart_encoding = *p++;
    if (lpstart_encoding == 0xff) /* DW_EH_PE_omit */
        info->landing_pad_start = info->start;
    else
        p = read_encoded_value_with_base(
            lpstart_encoding, base_of_encoded_value(lpstart_encoding, context),
            p, &info->landing_pad_start);

    info->ttype_encoding = *p++;
    if (info->ttype_encoding == 0xff)
        info->ttype = 0;
    else {
        p = read_uleb128(p, &table_size);
        info->ttype = p + table_size;
    }

    info->call_site_encoding = *p++;
    p = read_uleb128(p, &table_size);
    info->action_table = p + table_size;
    return p;
}
