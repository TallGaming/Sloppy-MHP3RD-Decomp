/*
 * Purpose: retain the supported packet-field recovery view for FUN_088338c0
 * without inventing its callback ABI or the two unresolved helper interfaces.
 *
 * Target-local call flow obtains the shared packet area, writes two adjacent
 * state bytes, initializes two stack-resident pair buffers, and passes each
 * pair buffer with a +32 destination to FUN_088337d4.  One recovered record
 * pointer is then passed to reviewed packet-record helpers at offsets 0, 8,
 * and 48.  The helper remains ABI-unresolved, so these offsets are a field
 * view, not a complete struct definition.
 * The function has no direct or simple materialized-indirect caller in the
 * current census, so input ownership cannot yet be asserted.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern void *FUN_0882fc48(void);
extern u8 *FUN_088304bc(u8 *dst, u8 *src);
extern void FUN_0882e484(u32 *output);
extern void FUN_088303e0(void *record, int value);
extern void FUN_0883040c(u8 *record, const u8 *source);
extern void FUN_08830464(u8 *record, const u8 *source);

/* FUN_088337d4 and the target's complete callable shape remain unresolved. */
