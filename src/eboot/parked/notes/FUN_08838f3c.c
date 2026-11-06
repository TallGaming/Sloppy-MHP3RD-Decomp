/*
 * FUN_08838f3c: retain the supported record-comparison and notification
 * boundary without claiming a whole C recovery.
 *
 * No direct census caller establishes this entry ABI.  Target flow obtains
 * the +0x24 shared block, passes a local output area to unresolved
 * FUN_0882e484, then sends a separate local area through the registered
 * kind-six wrapper with zero as its remaining lane and into the first
 * verified six-byte predicate.  On that predicate's nonzero path, the
 * produced output pair is the second lane of the other verified six-byte
 * predicate.  The second predicate's false artificial
 * return path reaches the confirmed byte-fill thunk with a 332-byte extent,
 * followed by unresolved selector-16 dispatch.  The first local object's
 * layout beyond its observed two word stores, both entry lanes, predicate
 * object ownership, dispatch ABI, and the returned value's public type are
 * unproved.  This is an uncompiled partial field/ABI view, not a natural
 * whole-function candidate.
 */

typedef unsigned int u32;

extern void *FUN_0882fc48(void);
extern void *FUN_088ebb10(void *destination, int value, u32 size);
extern void FUN_0882e484(void);
extern void FUN_088303e0(void);
extern int FUN_08830584(const unsigned char *record);
extern int FUN_088305b4(const void *left, const void *right);
extern void FUN_088399f0(void);

/* Supported branch boundary, intentionally not compiled:
 *   shared = FUN_0882fc48();
 *   unresolved local production; FUN_088303e0(...);
 *   if (FUN_08830584(...)) {
 *       if (!FUN_088305b4(...)) {
 *           FUN_088ebb10(..., 0, 332); FUN_088399f0(16);
 *       }
 *   }
 */
