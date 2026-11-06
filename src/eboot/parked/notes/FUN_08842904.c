/*
 * Purpose: retain the verified call graph and safe field view for
 * FUN_08842904.
 *
 * The only declared caller is still pending.  This target has two direct
 * calls to FUN_0886cae0 and no indirect calls.  Its parked callee draft
 * describes a four-byte-slot accessor with an object plus index interface,
 * but that ABI and ownership are not confirmed.  The target's own argument
 * ABI, object layout, slot indices, field widths, and result semantics are
 * therefore unresolved.  This is an uncompiled partial view, not a whole
 * C candidate.  The upstream callers do not expose an address-formation or
 * callback-table route that can supply the missing signature.
 * Synthetic scalar probes exercise one accessor call per tested path, eight
 * target writes, and the two observed return encodings (zero and all bits
 * set).  They do not prove the real ABI, object field meanings, or the path
 * containing the second static call.
 */

typedef unsigned int u32;

/*
 * FUN_0886cae0 is PARKED; do not use this provisional declaration to build a
 * candidate.  Repeated target calls establish only the dependency edge.
 */
extern u32 FUN_0886cae0(u32 object, u32 index);

