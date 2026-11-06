/*
 * Purpose: retain the target-proved float-state boundaries for
 * FUN_08857710 without inventing the unresolved virtual callback ABI.
 *
 * This is an uncompiled PARKED field view, not a candidate.  The 572-byte
 * target has four indirect calls, two direct calls to the PARKED vector-state
 * helper, and scalar single-precision comparison/arithmetic on the observed
 * fields.  Four callers reach the interval, but none currently proves the
 * owner types, callback signatures, or the branch-to-callback mapping.
 */

typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

typedef struct FUN_08857710_ModeOwner {
    u8 unknown_0000[0x4c];
    u8 mode_4c;
} FUN_08857710_ModeOwner;

typedef struct FUN_08857710_VectorInput {
    u32 word_00;
    f32 scalar_04;
    u8 unknown_08[0x98];
    f32 scalar_a0;
    f32 scalar_a4;
} FUN_08857710_VectorInput;

typedef struct FUN_08857710_FloatState {
    u32 word_00;
    u32 word_04;
    u8 unknown_08[0x78];
    f32 component_80;
    f32 component_84;
    f32 component_88;
    u8 unknown_8c[0x1c];
    f32 scalar_a8;
    u8 unknown_ac[0x68];
    u32 word_114;
} FUN_08857710_FloatState;

/* Direct target edges exist, but their full declarations remain PARKED. */
extern int FUN_0882b7f8(void *state, const void *input, f32 supplied_value);
extern void FUN_08856638(void);
