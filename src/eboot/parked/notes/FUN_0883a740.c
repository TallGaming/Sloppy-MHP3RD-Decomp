/*
 * Purpose: retain the caller-supported input boundary and control/state view
 * for FUN_0883a740.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * Both direct callers establish a locally derived a0 value rather than
 * forwarding their entry a0; the target consumes that slot before redefining
 * it, so a pointer-like first parameter is a supported ABI hypothesis.  The
 * target owns a 32-byte frame and routes
 * input-derived state through a six-byte shared-record comparison followed by
 * a six-byte nonzero test.  Both predicate returns feed nearby conditional
 * control, within a four-conditional state path without any additional direct
 * dependency.
 *
 * The target accesses several input-derived object bases, but their offsets,
 * ownership, field widths, and the branch result meaning are not yet typed.
 * Naming a structure or supplying a body would therefore invent semantics.
 */
typedef unsigned char FUN_0883a740_byte;
typedef struct FUN_0883a740_input FUN_0883a740_input;

extern int FUN_08830584(const FUN_0883a740_byte *record);
extern int FUN_08830550(const signed char *values);

/*
 * a0 is the only observed consumed integer entry slot.  The return type and
 * pointed-to layout need branch and field-binding evidence.
 */
typedef int (*FUN_0883a740_signature_hypothesis)(FUN_0883a740_input *input);
