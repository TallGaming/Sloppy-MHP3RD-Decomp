/*
 * FUN_088551cc: dispatch a record through state flags, an indirect callback,
 * and a final external transfer.
 *
 * PARKED field/ABI view.  The target reads halfword fields through its second
 * integer argument and separately performs word and halfword stores; the store
 * base association is unresolved. Its first integer argument is loaded by the
 * sole observed caller. The callback target is loaded through an unresolved
 * base and the tail callee is unclassified. Field offsets, record ownership,
 * callback signature, and the final transfer's ABI therefore remain hypotheses
 * rather than a source implementation.
 */

typedef struct FUN_088551cc_RecordView {
    unsigned short input_word_a; /* read; role unknown */
    unsigned short input_word_b; /* read; role unknown */
    unsigned int payload_words[2]; /* reads and store relation unresolved */
} FUN_088551cc_RecordView;

typedef struct FUN_088551cc_DispatchView {
    void *loaded_context;             /* caller supplies this in integer slot 0 */
    FUN_088551cc_RecordView *record;  /* target dereferences integer slot 1 */
    void *indirect_callback;          /* provenance unresolved in the target */
} FUN_088551cc_DispatchView;

/*
 * Required recovery evidence:
 * - the concrete record layout and flag meanings;
 * - the storage/base that yields the indirect callback;
 * - ABI and ownership for FUN_088f2118;
 * - a caller or table registration proving all live call slots.
 */
