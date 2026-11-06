/*
 * Purpose: retain the verified target control-flow observations without a
 * fabricated callable declaration or compilable body.
 *
 * Artificial target runs enter a 100-call path to FUN_0885cafc when lane 1
 * is a nonzero buffer pointer. The callee receives that lane as its second
 * argument and a third argument that advances across 100 byte positions.
 * A fixed nonzero artificial callee result changes the call count to 10.
 * The target itself returns zero in all tested paths. The caller
 * FUN_0883fa58 and callee ABI are both unresolved ASM, so the remaining
 * input lanes and object ownership cannot be stated safely in C.
 */

typedef unsigned char u8;

struct FUN_0883e818_flow_view {
    unsigned int unknown_lane0;
    u8 *iterated_lane1;
    unsigned int unresolved_lane2;
    unsigned int unresolved_lane3;
};
