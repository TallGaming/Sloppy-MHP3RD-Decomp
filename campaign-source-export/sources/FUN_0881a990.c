/*
 * Purpose: retain the uncompiled source-identity hypothesis for FUN_0881a990.
 *
 * This helper closely follows the preceding unsigned multiword-division shape,
 * but saves three callee-saved registers and performs substantially more
 * subtraction than FUN_0881a380.  GCC 4.0.4 libgcc2.c's signed __divdi3 and
 * __moddi3 both negate signed operands around inline __udivmoddi4; __divdi3
 * is the closer no-local-remainder lead.  ABI, full provenance, and byte
 * comparison remain unresolved; this is not a target definition.
 */
#include <stdint.h>

typedef struct FUN_0881a990_U64Words {
    uint32_t low;
    uint32_t high;
} FUN_0881a990_U64Words;

/* ABI hypothesis only: two 64-bit signed inputs and a 64-bit quotient. */
extern int64_t FUN_0881a990(int64_t numerator, int64_t denominator);
