/*
 * Purpose: uncompiled field and dependency view for FUN_0883c6d0.
 * This is not a whole-function candidate.  Target dataflow reads byte offsets
 * 1 and 2 through a caller-provided pointer and invokes two unresolved game
 * helpers.  Both known direct calls populate a0-a3, but their types and the
 * return contract are unresolved, so no callable signature is claimed.
 */
typedef unsigned char u8;

typedef struct FUN_0883c6d0_InputView {
    u8 field_00;
    u8 field_01;
    u8 field_02;
} FUN_0883c6d0_InputView;

/* Verified target-local input-field view; no callable body is claimed. */
static void FUN_0883c6d0_field_view(const FUN_0883c6d0_InputView *input)
{
    (void)input->field_01;
    (void)input->field_02;
}
