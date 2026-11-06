/*
 * Purpose: retain the recovered dispatch-family boundary for FUN_0882dfc0.
 * This is an intentionally uncompiled diagnostic partial.  The entry has no
 * direct code callers or literal pointer-table reference in the loaded image.
 * Its call order and register-level forwarding are now recovered, but the
 * type and ownership of the selector pointer and opaque fourth argument are
 * not independently established, so this is not a whole C candidate.
 */
typedef unsigned short u16;

extern void *FUN_0882fc38(const void *recipient, const void *payload,
                          unsigned type, void *opaque_arg3);
extern void FUN_088301bc(void *first, void *second, unsigned type,
                         void *opaque_arg3);
extern void FUN_0882fc5c(void *context, unsigned tag, unsigned type,
                         void *opaque_arg3);
extern void FUN_088302c4(void *context, const void *selector, unsigned type,
                         void *opaque_arg3);
extern void FUN_088300cc(void *context, const void *recipient, u16 code,
                         void *opaque_arg3);
extern void FUN_0882febc(void *context, const void *recipient, u16 code,
                         void *opaque_arg3);

void FUN_0882dfc0(const void *recipient, const void *payload, unsigned type,
                  void *opaque_arg3)
{
    void *context = FUN_0882fc38(recipient, payload, type, opaque_arg3);
    const void *selector = 0; /* Target loads an unresolved global pointer. */
    u16 code = *(const u16 *)((const unsigned char *)recipient + 0x300);

    FUN_088301bc(0, 0, type, opaque_arg3);
    FUN_0882fc5c(context, 11, type, opaque_arg3);
    FUN_088302c4(context, selector, type, opaque_arg3);
    FUN_088300cc(context, recipient, code, opaque_arg3);
    FUN_0882febc(context, recipient, code, opaque_arg3);
}
