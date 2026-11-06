/*
 * Purpose: retain the independently observed boundary of FUN_0882018c.
 *
 * The verified-library function frame_heapsort is the sole discovered caller
 * and reaches this target at two call sites.  At each site it forwards its
 * first two integer inputs and derives the remaining inputs locally.  The
 * target has a local frame, seven conditional transfers, and three indirect
 * calls.  Each indirect call uses the forwarded second entry slot as its
 * target, forwards the first entry slot as its first callback input, and
 * supplies two loaded values.  That behavior is consistent with a heap
 * down-operation using an unresolved comparison contract.
 *
 * The public GCC 4.0.4 frame_downheap body is exactly the same size but has
 * ordinary instruction differences.  It is therefore only a semantic lead;
 * it does not prove this target's source, data layout, helper ABI, or library
 * ownership.
 *
 * UNCOMPILED PARTIAL: no direct target callee is bound and the element,
 * comparator, heap-index, and result conventions cannot be stated honestly.
 */

typedef unsigned int mhp3rd_word;

/*
 * Boundary-only view.  The caller establishes that the first two slots are
 * forwarded; target dataflow establishes that the second is an indirect-call
 * target.  Its return convention, callback input types, heap layout, and the
 * derived trailing slots are not independently verified.
 */
static void FUN_0882018c_heap_down_view(mhp3rd_word callback_context,
                                        mhp3rd_word callback_target,
                                        mhp3rd_word derived_third,
                                        mhp3rd_word derived_fourth);
