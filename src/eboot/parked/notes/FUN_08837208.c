/*
 * Purpose: preserve an incomplete, evidence-backed parser/setup control view
 * for FUN_08837208 without inventing the input format or object ABI.
 *
 * Artificial-state execution distinguishes a path through the global offset
 * accessor, signed-byte predicate, and unclassified FUN_088399f0 from a path
 * that additionally invokes the parked global-pair copier and the registered
 * one-byte cursor helper before FUN_088399f0.  Isolating the predicate's
 * synthetic result selects those two paths.  The later record-update and
 * comparison helpers exist in the target but were not reached by supported
 * artificial states: the exhaustive initial-read/predicate matrix covers 51
 * of the target's 89 decoded scalar instructions.  No direct caller was found
 * in the whole executable text scan.
 *
 * The target therefore remains an intentionally uncompiled field/control
 * view: FUN_088399f0, FUN_0882e484 and the caller/input-layout ABI are not
 * independently established.
 */
