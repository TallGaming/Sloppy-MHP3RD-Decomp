/*
 * Purpose: retain the supported artificial-flow view for FUN_0883fa58.
 *
 * The sole declared direct caller is unresolved FUN_0884e26c. In the tested
 * zero-initialized artificial state, this target makes a 17-call sequence:
 * table resolution and descriptor dispatch, one unknown submit, two calls to
 * FUN_0883e818, ten calls to FUN_0883d20c, then resolution and dispatch.
 * Input lane a0 reaches the ten signed-pair scan calls as lane 0. Lanes a1
 * and a2 reach the first two FUN_0883e818 calls. The target reads but does
 * not write two signed halfword fields at a3+24 and a3+26; each is
 * sign-extended into lanes 5 and 6 of the final descriptor dispatch. Result bits from the
 * final FUN_08904570 call are preserved.
 *
 * This is an uncompiled field view. FUN_0883e818, FUN_088ff8f0,
 * FUN_08900bf0, FUN_08904570, and FUN_089048a8 lack complete verified
 * callable contracts; the direct caller and fixed-state operands remain
 * unresolved. A whole natural candidate would fabricate ABI and ownership.
 */
typedef short s16;

typedef struct {
    unsigned char unknown[24];
    s16 field_24;
    s16 field_26;
} FUN_0883fa58_RecordView;

void FUN_0883fa58_forwarding_view(int a0_scan_context, int a1, int a2,
                                  const FUN_0883fa58_RecordView *a3_record)
{
    (void)a0_scan_context;
    (void)a1;
    (void)a2;
    (void)a3_record;
    /* Preserved only as an ABI/field evidence view; do not compile. */
}
