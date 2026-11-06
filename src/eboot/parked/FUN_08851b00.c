/*
 * FUN_08851b00: prepare and submit one presentation descriptor.
 *
 * This is an intentionally uncompiled field/ABI view.  Direct-call evidence
 * establishes one FUN_08900bf0 batch submission followed by one FUN_08904570
 * dispatch.  Artificial probes preserve that order for two record states and
 * show the second input forwarded into the dispatch plus the third input
 * forwarded into both calls.  Synthetic access classification finds no reads
 * from any incoming object; the target instead reads and writes absolute
 * state plus its stack.  A 65-byte artificial scan of the second input did
 * not alter either call's forwarded lanes, so all three inputs remain opaque.
 * The observed absolute-state accesses mix byte and word widths; their owner
 * and typed declarations are still unresolved.
 * The target has
 * three conditional branches and a single return path.
 */

/*
 * Required recovery before implementation:
 * - establish the callers' argument lanes and the target's true input object;
 * - bind the three predicates to concrete fields and recover their effects;
 * - recover every descriptor argument for FUN_08900bf0 and FUN_08904570.
 */
void FUN_08851b00(void *first, void *second, void *third)
{
    /* Partial dataflow only; no callable candidate or byte claim is made. */
    (void)first;
    (void)second;
    (void)third;
}
