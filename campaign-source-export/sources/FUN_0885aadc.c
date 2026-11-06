/*
 * Purpose: retain the supported local frame extent and downstream call ABI.
 *
 * The assigned wrapper builds a seven-word stack frame before its sole direct
 * call to FUN_0885a7ec. The exact mapping from its incoming EABI lanes to
 * the frame fields is not recovered here, so this is an uncompiled field view,
 * not a candidate implementation.
 */
typedef unsigned int u32;

struct AudioOperationFrame {
    u32 word[7];
};

extern unsigned int FUN_0885a7ec(const struct AudioOperationFrame *frame,
                                 unsigned int operation);
extern const u32 D_08965dd0[];

/* D_08965dd0 through the following aligned template words seed this frame. */
