/*
 * Purpose (hypothesis): initialize temporary scalar state, form three float
 * tuples, hand them to the accepted Group-B matrix wrapper, then finalize the
 * same shared record.
 *
 * This is a diagnostic partial, not a complete candidate.  It preserves the
 * accepted float tuple and opaque-helper ABI rather than recasting tuples as
 * unsigned-word copies.
 */

typedef unsigned char u8;

struct Tuple4_0882d3e8 {
    float element[4];
};

struct Record_0882d3e8_view {
    float transient_scalar_0;
    float transient_scalar_1;
    float transient_scalar_2;
    float transient_scalar_3;
    u8 unknown_to_ea0[0xea0 - 0x10];
    struct Tuple4_0882d3e8 input_a_ea0;
    struct Tuple4_0882d3e8 input_b_eb0;
    struct Tuple4_0882d3e8 input_c_ec0;
};

extern void FUN_08829e6c(void *record);
extern void FUN_0882bfb0(void *record, struct Tuple4_0882d3e8 *input_a,
                         struct Tuple4_0882d3e8 *input_b, struct Tuple4_0882d3e8 *input_c);
extern void FUN_0882d310(void *record);

/*
 * The target constructs all twelve float-tuple words in three 16-byte stack
 * objects, then calls FUN_0882bfb0 with record plus those three addresses.
 * The source provenance of each element remains opaque, so no fabricated body
 * is supplied.  FUN_08829e6c and FUN_0882d310 are retained as opaque helpers.
 */
