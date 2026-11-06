/*
 * Purpose: retain the public execute_stack_op ABI and semantic field view
 * for FUN_0881df0c.  This file is intentionally uncompiled and is not a
 * whole candidate.  The target needs independently traced callers and
 * relocation ownership before this public interpreter can be attributed.
 */

typedef unsigned long UnwindWord;

struct UnwindContext;

/*
 * Public GCC 4.0.4 unwind-dw2.c interface:
 * - op_ptr/op_end delimit one DWARF location-expression bytecode stream;
 * - context supplies saved register values to register opcodes;
 * - initial seeds a bounded value stack; and
 * - the top stack value is returned after expression execution.
 * The public interpreter accepts literal/constant, register/base-register,
 * stack, unary, binary, branch, and no-op classes.  Its value stack has 64
 * words and underflow, invalid opcode/operand size, or overflow aborts.
 * Public callers evaluate a CFA expression with initial zero, or a saved-
 * register expression with the current CFA as initial.  Those caller roles
 * are source evidence only; target callers remain unverified.
 */
static UnwindWord FUN_0881df0c_public_semantic_view(
    const unsigned char *op_ptr,
    const unsigned char *op_end,
    struct UnwindContext *context,
    UnwindWord initial);
