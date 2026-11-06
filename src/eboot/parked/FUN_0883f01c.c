/*
 * FUN_0883f01c: configure a manager's fixed descriptor batches and optional
 * selector-dependent records.
 *
 * This is an intentionally uncompiled field view.  Artificial executions
 * show the first and final descriptor submissions on every tested input, a
 * record dispatch between them, and a conditional block selected only by
 * integer lane five.  That block performs table lookups using low-half keys
 * 145 and 37, formats an intermediate record, then dispatches again.  The
 * manager is loaded from D_09beb0bc.  The concrete
 * object owners, static descriptor layouts, and caller ABI remain unknown.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *D_09beb0bc;
extern u32 FUN_08867d40(void *manager, u16 key);
extern void FUN_088fb044(u8 *settings, u8 a, u8 b, u32 c,
                         u8 d, u8 e, u8 f, u8 g);
extern void FUN_08900bf0(void *manager, void *objects, u32 second, u32 count,
                         u32 fourth, u16 fifth, u16 sixth, u32 third);
/* The existing descriptor-dispatch ABI is PARKED; do not treat this as a prototype. */
extern void FUN_08904570(void);

void FUN_0883f01c_field_view(u32 lane0, u32 lane1, u32 lane2, u32 lane3,
                             u32 lane4, u32 optional_selector,
                             u32 lane6, u32 lane7)
{
    void *manager = D_09beb0bc;

    /* Observed unconditional ordering: descriptor batch, record dispatch. */
    FUN_08900bf0(manager, (void *)0x089716dc, lane6, 3, 0, 0, 0, 0);
    FUN_08904570();

    if (optional_selector != 0) {
        /* Two table resolutions, a formatter call, and another dispatch occur.
         * Their keys, result ownership, and forwarded stack lanes need callers. */
        (void)FUN_08867d40(manager, 145);
        FUN_08904570();
        (void)FUN_08867d40(manager, 37);
        FUN_08904570();
    }

    /* Settings storage targets manager + 0x2ab4 in synthetic executions. */
    FUN_088fb044((u8 *)manager + 0x2ab4, 0, 0, lane2, 0, 0, 0, 0);
    FUN_08900bf0(manager, (void *)0x08971868, lane6, 1, 0, 0, 0, 0);

    (void)lane0; (void)lane1; (void)lane3; (void)lane4; (void)lane7;
}
