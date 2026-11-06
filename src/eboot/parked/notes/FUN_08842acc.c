/*
 * Purpose: retain the evidence-backed callable boundary for FUN_08842acc.
 *
 * This is an uncompiled partial ABI view, not a whole-function candidate.
 * Its only declared caller consumes the return value.  The target makes five
 * result-consuming calls, in the order two calls to FUN_088a6178, two calls
 * to FUN_088a5644, then one call to FUN_0883e75c.  The last target operation
 * that assigns the result register is an unsigned less-than comparison, so
 * the return type is represented as an integer boolean rather than void.
 * The target has no non-stack stores; remaining side effects belong to the
 * unresolved direct callees.
 * The callee prototypes and argument layouts are not verified.
 */

typedef int bool_result;

/* Argument count and types need caller-side register-flow recovery. */
typedef bool_result FUN_08842acc_abi();
