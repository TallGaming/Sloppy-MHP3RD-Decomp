/*
 * Purpose: initialize the adjacent text helper and encode a character into a
 * mutable output-byte cursor.
 *
 * The recovered ABI has an opaque leading context, a mutable output cursor
 * slot, a character value, and a mode argument; its sole direct caller passes
 * all but the local cursor slot through unchanged.  The target performs up to
 * three byte stores and updates the cursor slot.  Its non-ASCII mapping and
 * mode-bit meaning remain unrecovered, so this direct-byte path is an
 * intentionally incomplete diagnostic, not a whole-function candidate.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_0882d710(void);

void FUN_0882d730(void *context, u8 **output_slot, u32 character, u32 mode)
{
    u8 *output = *output_slot;

    (void)context;
    (void)mode;
    FUN_0882d710();
    if (character < 0x80) {
        *output_slot = output + 1;
        output[0] = (u8)character;
    }
}
