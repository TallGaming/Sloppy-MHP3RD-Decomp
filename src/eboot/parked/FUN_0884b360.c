/*
 * Purpose: retain the supported descriptor preparation flow for
 * FUN_0884b360.  This is an uncompiled partial field view.  It does not
 * claim a whole source candidate because terminal argument lanes and several
 * dependency contracts remain unresolved.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;

typedef struct DescriptorRow {
    u8 opaque[36];
} DescriptorRow;

typedef struct Input0884b360 {
    u16 id;
} Input0884b360;

extern void *D_09beb0bc;
extern void *D_08aace80;
extern DescriptorRow D_089724c8;
extern DescriptorRow D_08972510;
extern DescriptorRow D_08972534;
extern DescriptorRow D_08972558;
extern DescriptorRow D_0897257c;
extern const u8 D_089caf8c[];

/* The return lane is independently supported although registered source says void. */
extern u32 FUN_08867d40(void *context, u16 id);
extern u32 FUN_08867d68(void *context, u16 id);
extern void FUN_089019f4(u32 *record, u16 id, int value, s16 amount,
                         signed char mode, signed char use_default);
extern void FUN_08904570(void *manager, DescriptorRow *row, u32 descriptor,
                         u8 selector, u32 request, s16 x, s16 y,
                         u32 descriptor2, u8 stack_selector);
extern u8 FUN_088fc0b8(void *context, u8 index);

/*
 * Actual target flow:
 * - Submit D_089724c8 as a two-row group using incoming lane 2 and zeroes in
 *   the remaining observed scalar lanes.
 * - Initialize a 48-byte local presentation record from input->id with -1,
 *   zero amount/mode, and use_default set to one.
 * - Submit D_08972510 as one row from that local record with zero scalar
 *   lanes.
 * - Resolve input->id through slot-two resolver and dispatch D_08972534 with
 *   selector zero, incoming value, zero coordinates, and terminal byte zero.
 * - Resolve descriptor 148, format a local string using a byte from the
 *   20-byte D_089caf8c-indexed record, and dispatch D_08972558.
 * - Resolve descriptor 547 and dispatch D_0897257c with selector zero,
 *   incoming value, zero coordinates, and terminal byte two.
 *
 * The target passes additional stack lanes to both submit and dispatcher
 * calls.  Their values and the final return transfer are intentionally not
 * reconstructed here.
 */

/* One actual loader caller supplies this three-lane shape; result is unused. */
extern void FUN_0884b360(void *loader_context, Input0884b360 *input, int value);
