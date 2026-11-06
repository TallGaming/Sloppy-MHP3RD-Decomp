/*
 * FUN_0883e1bc: forward a reordered eight-lane request to FUN_0885d2cc.
 *
 * Synthetic target execution with distinct artificial lane values shows that
 * lane 0 is deliberately replaced by zero, lanes 1 and 2 are swapped, lanes
 * 3 through 7 retain their order, and the callee's complete 32-bit result is
 * returned.  The incoming first lane is not read by this wrapper.
 */

typedef int s32;

extern s32 FUN_0885d2cc(s32 zero, s32 third, s32 second, s32 fourth,
                        s32 fifth, s32 sixth, s32 seventh, s32 eighth);

s32 FUN_0883e1bc(s32 unused_first, s32 second, s32 third, s32 fourth,
                  s32 fifth, s32 sixth, s32 seventh, s32 eighth)
{
    (void)unused_first;
    return FUN_0885d2cc(0, third, second, fourth, fifth, sixth, seventh, eighth);
}
