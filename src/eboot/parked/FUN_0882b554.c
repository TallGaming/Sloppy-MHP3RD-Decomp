/*
 * Purpose: derive a three-component delta, construct a transform through two
 * vector-unit helpers, and apply that transform to the delta.
 *
 * UNCOMPILED CALL/ABI LEDGER ONLY.  This target has one caller
 * (FUN_088de3a4), three direct calls, and no target branches.  The caller
 * supplies an output pointer plus two three-float inputs; the target does not
 * consume its fourth incoming argument.  It subtracts the first input from
 * the second component-wise, then uses three stack-resident temporary regions:
 * delta at local +0, helper output at +16, and a transform region at +32.
 * A fourth local float comes from a global constant, but its role is unknown.
 *
 * FUN_088122fc and FUN_08812298 contain vector-unit instructions that are not
 * decoded by the local generic disassembler.  Their concrete vector/matrix
 * dimensions and semantic contracts are therefore unknown.  Do not compile,
 * register, or compare this incomplete ledger as a candidate.
 */
typedef float f32;

/* Direct call sequence and pointer relationships from the target:
 *
 * FUN_088122fc(local + 16, local + 0)
 * FUN_08812298(local + 32, local + 16)
 * FUN_088759ec(output, local + 0, local + 32)
 *
 * FUN_088759ec is independently recovered as a three-component transform by
 * a row-stride-four matrix.  This establishes the final output relation but
 * not the two opaque helper ABIs. */
struct Vector3_0882b554 {
    f32 x;
    f32 y;
    f32 z;
};

extern void FUN_088759ec(struct Vector3_0882b554 *output,
                          const struct Vector3_0882b554 *vector,
                          const f32 *row_stride_four_matrix);

/* The recovered direct caller reaches this target with pointer arguments in
 * the first three registers.  Names are descriptive only pending vector-unit
 * helper recovery. */
extern void FUN_0882b554(struct Vector3_0882b554 *output,
                         const struct Vector3_0882b554 *first,
                         const struct Vector3_0882b554 *second);
