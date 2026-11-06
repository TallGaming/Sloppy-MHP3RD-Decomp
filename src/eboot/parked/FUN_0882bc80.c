/*
 * Purpose: construct four signed, scaled numeric tuples from a record and
 * submit each tuple to the vector-unit transform helper.
 *
 * UNCOMPILED ABI LEDGER ONLY.  FUN_0882cc30 is the recovered sole caller and
 * supplies one record pointer.  The target derives its remaining arguments
 * from fields in that record, uses a 40-byte stack tuple area, and calls
 * FUN_0882bc1c four times.  Its final call supplies a record-relative output
 * region at +0x1120.
 *
 * The callee is already PARKED: it is VFPU-heavy and reads t0 in addition to
 * its conventional argument registers.  The current GCC C path cannot emit
 * its vector instructions, and its C parameter boundary is not recovered.
 * A normal C prototype for the helper would invent ABI facts and cannot be a
 * defensible source candidate.  This ledger intentionally does not compile.
 */
typedef float f32;
typedef unsigned char u8;

struct Record_0882bc80 {
    u8 unknown_0000[0x1120];
    u8 transform_output_1120[1];
};

/* Each call arranges conventional argument registers plus stack tuples; the
 * target also preserves an undocumented t0 input for the VFPU callee. */
extern void FUN_0882bc1c(void);

void FUN_0882bc80_ledger(struct Record_0882bc80 *record)
{
    (void)record;
    /* See EVIDENCE.md for the call/dataflow ledger. */
}
