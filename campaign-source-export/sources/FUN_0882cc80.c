/*
 * Purpose (hypothesis): package four scalar inputs for a local evaluator and
 * write its scalar result into the fifth field of the same 20-byte packet.
 *
 * This is a diagnostic field view, not a complete candidate.  The evaluator
 * consumes a live FPR arrangement that ordinary C cannot describe here.
 */

typedef float Fun0882cc80Scalar;

struct FUN_0882cc80_PACKET {
    Fun0882cc80Scalar input_0;
    Fun0882cc80Scalar input_1;
    Fun0882cc80Scalar input_2;
    Fun0882cc80Scalar input_3;
    Fun0882cc80Scalar result;
};

/*
 * Recovered field view only:
 * input_3 enters both the normal float-argument register set and f0 before
 * FUN_0882cc30.  Its post-call f0 value becomes result.  A normal C prototype
 * for FUN_0882cc30 would hide that live-register contract, so none is asserted.
 */
