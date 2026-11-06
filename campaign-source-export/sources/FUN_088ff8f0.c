/*
 * Purpose: preserve the proven Group-B ABI and caller-visible input layout for
 * FUN_088ff8f0 while its two internal submit paths remain unresolved.
 *
 * This is an uncompiled field view, not a whole-function candidate.  Calls at
 * FUN_088ffd94, FUN_088ffe00, FUN_088ffcc0, and FUN_0890000c establish that
 * the second input is an address of record data, arguments 5 and 6 are signed
 * 16-bit coordinates, and arguments 8 and 9 use -1 sentinels.  The target
 * has four direct calls in this order: an alpha-combine result, two submits,
 * then a second alpha result.  The first submit receives only copied setup
 * registers; the second differs at one argument by a memory-loaded value.
 * The two alpha results are consumed by later target logic.  Its callees do
 * not yet have verified ABIs, so this does not claim their prototypes.
 */

typedef signed short s16;
typedef unsigned int u32;

struct SubmitRecord088ff8f0 {
    u32 word00;
    u32 word04;
    s16 coordinate08;
    s16 coordinate0a;
    s16 coordinate0c;
    s16 coordinate0e;
};

typedef void FUN_088ff8f0_abi(
    void *manager,
    struct SubmitRecord088ff8f0 *record,
    u32 color_or_value,
    int mode_or_field,
    s16 x,
    s16 y,
    void *resource_or_extra,
    int sentinel_a,
    int sentinel_b,
    int final_mode);
