/*
 * Purpose: document the partial packet-assembly and submission path.
 *
 * This is an uncompiled field/ABI view, not a candidate implementation.
 * The target invokes the shared snapshot, packet preparation, header-update,
 * and submission routines in one path. Artificial-state execution also shows
 * writes through entry lane zero and preserves its bits in the result across
 * two input values, but no actual caller supports a formal pointer-return
 * declaration. The unaligned aggregate transfers, packet layout, helper
 * contracts, and branch result semantics are unresolved.
 */
typedef void *PacketPointer;

extern PacketPointer FUN_0882fc38(void);
extern void FUN_0882fc5c(void);
extern void FUN_0882febc(void);
extern int FUN_0883012c(void);
extern void FUN_088301bc(void);
extern void FUN_088ebb10(void);

void FUN_08836238(void);
