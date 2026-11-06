/*
 * Purpose: retain the supported partial investigation view for
 * FUN_088587a4. This is not a whole-function candidate.
 *
 * The target is a short Group B routine with direct dependencies. Its
 * callable argument and return ABI cannot be verified from a declared
 * caller or from the current dependency evidence. No guessed wrapper,
 * helper prototype, data-object declaration, or executable body is kept.
 */
#include <stdint.h>

typedef uint32_t FUN_088587a4_unverified_word_t;

/*
 * The recovered view has no verified parameters, return type, object
 * ownership, or complete control/data-flow model. Keep this type-only
 * marker separate from game source until natural source context is found.
 */
static FUN_088587a4_unverified_word_t FUN_088587a4_partial_marker;
