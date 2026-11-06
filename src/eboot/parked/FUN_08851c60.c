/*
 * FUN_08851c60: partial field view for a conditional descriptor dispatch.
 *
 * This is not a whole candidate.  Its sole currently found incoming tail call
 * supplies target lanes 0 and 2 from caller-loaded fields, target lane 1 from
 * caller lane 2, target lane 3 from caller lane 1, and target lane 4 from
 * caller lane 0.  That proves forwarding but not the original callable ABI.
 * It first delegates to FUN_08851c04 with the
 * D_08a31df0 service pointer, then conditionally dispatches static records at
 * D_08972384 and D_089723a8 through FUN_08904570.  The first record forwards
 * incoming lanes 1 and 3; the second uses a fixed descriptor lane and stack
 * byte 2.  Between those dispatches it invokes FUN_08867d40 and tests a value
 * which the registered source presently declares void.  Therefore a complete
 * natural expression would invent the resolver return ABI and record layouts.
 * Two terminal paths then tail-transfer with the second static record's
 * descriptor lanes; one reaches FUN_088fd6b8 and the other remains within the
 * local 0x08851cxx range.  Neither tail target has a proved interface.
 */

typedef unsigned char u8;
typedef unsigned short u16;

extern void *D_08a31df0;
extern void FUN_08851c04(void *service, int mode, int value, int selector);

void FUN_08851c60_field_view(void *unknown0, int descriptor_word,
                             int branch_value, int mode)
{
    (void)unknown0;
    (void)descriptor_word;
    (void)branch_value;

    /* Proven first action: service pointer plus lanes 3, 2, and 3. */
    FUN_08851c04(D_08a31df0, mode, branch_value, mode);
}
