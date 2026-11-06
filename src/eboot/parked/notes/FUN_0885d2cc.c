/*
 * Purpose: retain the evidence-supported boundary for the five-table selector
 * routine at FUN_0885d2cc without presenting an incomplete body as callable C.
 *
 * Uncompiled field view.  The one declared caller forwards eight integer EABI
 * lanes after replacing lane zero and exchanging lanes one and two.  Local
 * reference leads show that this routine addresses only the five 40-byte
 * selector tables for categories 0 through 4.  Scalar probing reaches a
 * control transfer outside the declared interval, so it must not be modeled
 * as a closed, side-effect-free leaf.  These facts do not establish which
 * lanes select records or fields, the transfer target, the return contract,
 * or the ownership of the remaining lanes.
 */
typedef unsigned char u8;

extern const u8 D_08980144[][40];
extern const u8 D_0897dffc[][40];
extern const u8 D_08984dac[][40];
extern const u8 D_08986f1c[][40];
extern const u8 D_089825ac[][40];

/*
 * The complete signature below records lane count only.  It is deliberately
 * not a candidate implementation: natural parameter types and result meaning
 * require an independently observed caller or object-layout evidence.
 */
typedef int s32;
extern s32 FUN_0885d2cc(s32 lane0, s32 lane1, s32 lane2, s32 lane3,
                        s32 lane4, s32 lane5, s32 lane6, s32 lane7);
