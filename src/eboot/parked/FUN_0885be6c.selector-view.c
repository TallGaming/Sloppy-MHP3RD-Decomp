/* Purpose: preserve the resolved selector and pointer-result interface.
 *
 * The selector selects one of eighteen file-backed game tables. The return
 * is its entry address at the unsigned index, or null outside that range.
 * Record ownership, full table declarations, and the generated switch
 * relocation still need source reconstruction. This declaration is uncompiled.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct SelectorObject0885be6c {
    u8 field_00;
    u8 selector;
    u16 index;
};

const u8 *FUN_0885be6c(void *unused_context,
                       const struct SelectorObject0885be6c *object);
