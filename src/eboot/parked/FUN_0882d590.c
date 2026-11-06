/*
 * Purpose: advance an encoded-text cursor and return the decoded character
 * value selected by an opaque text-decoder context.
 *
 * ABI evidence from four independent callers establishes a mutable pointer
 * slot in argument two: callers initialize slot zero with a byte cursor and
 * consume the returned character value.  The target has no direct global
 * owner reference, so the context-table owner cannot be recovered here.
 * The negative-byte mapping remains incomplete; this source intentionally
 * records only the recovered direct-byte path and is not a whole-function
 * match candidate.
 */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned int u32;

u32 FUN_0882d590(void *decoder_context, u8 **cursor_slot)
{
    u8 *cursor = *cursor_slot;
    u8 value = *cursor;

    (void)decoder_context;
    if ((s8)value >= 0) {
        *cursor_slot = cursor + 1;
        return value;
    }

    return 0;
}
