/*
 * Purpose: retain the verified recovery boundary for FUN_08845d28.
 *
 * This is not a candidate implementation.  The function has one declared
 * caller and seven direct callees.  Two callees have reusable C interfaces:
 * FUN_0885bbfc(void *, s32) returns a byte derived from its second argument,
 * and FUN_0885c858(void *, u8) reads a byte from a constant pair table.
 * FUN_0883d18c is PARKED, despite proven six-field equality behavior, so its
 * prototype must not be assumed here.  The remaining direct callees lack a
 * verified callable interface.  Consequently the input-object layout and
 * call argument provenance are not established sufficiently for natural C.
 * A synthetic all-zero selector witness reaches all seven direct calls and
 * performs both object reads and writes; nonzero selector paths hit an
 * unsupported scalar-probe operation.  It corroborates dispatch, but cannot
 * supply the missing types or source-level control semantics.
 */

typedef unsigned char u8;
typedef signed int s32;

extern u8 FUN_0885bbfc(void *unused, s32 value);
extern u8 FUN_0885c858(void *unused, u8 index);

/* No body: a stub would invent the unproven control and object semantics. */
