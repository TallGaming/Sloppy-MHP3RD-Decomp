/*
 * Purpose: retain the verified call-site ABI and field view for
 * FUN_08844098. This is an uncompiled partial recovery, not a candidate.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

extern int FUN_08841e34(void *unused, const u8 *record);
extern void FUN_0884406c(void *owner, const u8 *record, int zero,
                         void *fourth);
/* The target consumes the returned slot entry at its two call sites. */
extern void *FUN_08867d40(void *slot_manager, u16 slot);
extern void FUN_08904570(void *manager, u16 *descriptor, void *slot_entry,
                         u8 fourth, void *fifth, s16 x, s16 y, int eighth,
                         u8 stack);

/*
 * Confirmed facts:
 * - Inputs are forwarded to FUN_08841e34(owner, record).
 * - The real FUN_088442b8 caller supplies live EABI lanes through at least
 *   lane 7; the no-argument parked caller declaration is not a prototype.
 * - record +0xc06 is an unsigned status/resource selector. The first slot
 *   lookup uses selector +0x3ff.
 * - A nonzero status-count path calls FUN_0884406c with third argument zero
 *   and a fifth EABI argument of one.
 * - Both descriptor submissions consume the real v0 slot-entry value from
 *   FUN_08867d40. The first submission uses manager D_09beb0bc and the
 *   caller-provided descriptor; its x argument is read as s16 from argument
 *   four plus 0x18, and its ninth stack byte is one on the observed path.
 * - A later branch reaches FUN_088fff0c and can select the second lookup and
 *   descriptor submission. Its state contract is unresolved.
 *
 * The unresolved FUN_0884406c/FUN_088fff0c interfaces and the branch state
 * that exposes the second submission prevent a complete natural-C recovery.
 */
typedef struct {
    u8 prefix[0xc06];
    u8 resource_selector;
} Fun08844098RecordView;
