/*
 * Purpose: recover GCC libsupc++'s exception-specification filter loop.  It
 * walks the LSDA type-filter list and reports whether the thrown type matches
 * any listed catch type.  This is uncompiled: the PSP personality ABI and
 * exact helper declarations have not been recovered as a complete C++ unit.
 */

typedef int bool;
#define false 0
#define true 1

typedef unsigned int unwind_word;
typedef int unwind_sword;

struct lsda_header_info {
    const unsigned char *Start;
    const unsigned char *LPStart;
    const unsigned char *ttype_base;
    const unsigned char *TType;
    const unsigned char *action_table;
    unsigned char ttype_encoding;
    unsigned char call_site_encoding;
};

struct type_info;

extern const unsigned char *read_uleb128(const unsigned char *cursor,
                                         unwind_word *value_out);
extern const struct type_info *get_ttype_entry(
    const struct lsda_header_info *info, unwind_word index);
extern bool get_adjusted_ptr(const struct type_info *catch_type,
                             const struct type_info *throw_type,
                             void **thrown_ptr_p);

static bool
check_exception_spec(struct lsda_header_info *info,
                     const struct type_info *throw_type,
                     void *thrown_ptr,
                     unwind_sword filter_value)
{
    const unsigned char *cursor = info->TType - filter_value - 1;

    for (;;) {
        const struct type_info *catch_type;
        unwind_word type_index;

        cursor = read_uleb128(cursor, &type_index);
        if (type_index == 0)
            return false;

        catch_type = get_ttype_entry(info, type_index);
        if (get_adjusted_ptr(catch_type, throw_type, &thrown_ptr))
            return true;
    }
}
