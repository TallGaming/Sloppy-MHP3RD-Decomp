/*
 * Purpose: preserve the recovered descriptor and selector dataflow for
 * FUN_08849690.  This is an uncompiled partial field view, not a whole
 * candidate: several callees and the aggregate object contracts remain
 * unresolved.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;

typedef struct DescriptorRow {
    u8 opaque[36];
} DescriptorRow;

typedef struct TargetInput {
    u8 opaque_before_selector[0x12e3];
    u8 selector;
} TargetInput;

extern u32 *D_08aace80;
extern void *D_09beb0bc;
extern DescriptorRow D_08978c90[];
extern void *D_08a3345c;

/* Return lane use is supported by the target; registered source is ABI-incomplete. */
extern u32 FUN_08867d40(void *context, u16 index);
/* This callee's lane widths are supported but its owner and return contract are not. */
extern void FUN_08904570(void *manager, DescriptorRow *row, u32 descriptor,
                         u8 selector, u32 request, s16 x, s16 y,
                         u32 descriptor2, u8 stack_selector);
extern const u8 *FUN_0885be6c(void *context, const void *selector_object);
extern u32 FUN_0885f610(void *context, u32 selector);

/*
 * After one leading call that forwards the incoming four lanes, the target
 * emits seven constant-ID descriptor rows.  Each row is 36 bytes apart,
 * uses selector input->selector and constant byte lane 10, and resolves the
 * descriptor through D_08aace80 with IDs 610, 600, and 562..566.
 */
static void FUN_08849690_emit_constant_rows(TargetInput *input)
{
    static const u16 ids[7] = { 610, 600, 562, 563, 564, 565, 566 };
    unsigned int row;

    for (row = 0; row != 7; row++) {
        u32 descriptor = FUN_08867d40(D_08aace80, ids[row]);
        FUN_08904570(D_09beb0bc, &D_08978c90[row + 1], descriptor,
                      input->selector, 10, 0, 0, 0, 10);
    }
}

/*
 * The remaining target paths use a 220-byte stack aggregate, call the
 * public sprintf implementation seven times, and dispatch rows 8..14.
 * The observed resolver IDs are 614 then 616; coordinates and request lanes
 * come from the aggregate.  The selector object is also passed to both
 * FUN_0885be6c and FUN_0885e1c8, whose complete interface is unresolved.
 * These selector calls use D_08a3345c; the resolved record byte at +1 also
 * feeds the classifier FUN_0885f610.
 *
 * A final conditional path calls FUN_08848e70 and FUN_08900bf0, then passes
 * control to the following declared entry.  This view intentionally stops
 * before inventing their ownership, branch predicates, or return behavior.
 */
