/*
 * Purpose hypothesis: perform a shared-state update sequence using the record
 * state rooted at D_09bf5250, then notify/dispatch through event helpers.
 *
 * This is intentionally an uncompiled target-specific field/ABI view. The
 * reference census has no direct JAL caller for this entry, so its incoming
 * PSP EABI lanes cannot be inferred from an adjacent incomplete interval.
 * The target reads D_09bf5250, writes the distinct absolute state location
 * D_09bf07e2, and invokes several dependencies that remain PARKED or
 * unclassified. A callable C signature, state-object layout, or result type
 * would therefore be invented rather than evidenced.
 */

typedef unsigned char u8;

extern void *D_09bf5250;
extern u8 D_09bf07e2;
extern void *FUN_0882fc48(void);
extern void FUN_088304d0(u8 *destination, u8 *source);

/*
 * Retained flow: the target first acquires shared state via FUN_0882fc48,
 * clears or initializes local/shared storage through the verified byte-fill
 * thunk, invokes state helpers, dispatches through FUN_088394dc twice on
 * separate paths, and reaches the fixed-record validator FUN_08834d7c.
 */
