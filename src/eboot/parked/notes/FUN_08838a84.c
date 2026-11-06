/*
 * Purpose: retain the ABI recovery boundary for FUN_08838a84.
 *
 * This is intentionally an uncompiled partial field view, not a C candidate.
 * The target makes seven direct calls and has no recovered direct caller.
 * Five callees have registered C evidence, but two target dependencies remain
 * PARKED with no confirmed ABI. The existing FUN_088ebb10 source also has a
 * legacy ABI-incomplete declaration, despite a separate typed-thunk witness.
 * Therefore argument lanes, ownership, result type, and object layouts are
 * not established for a natural whole-function translation.
 */
