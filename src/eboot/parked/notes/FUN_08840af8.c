/*
 * Purpose: retain the verified ABI and dependency surface for FUN_08840af8.
 *
 * This is intentionally an uncompiled field view, not a whole C candidate.
 * Three direct callers preserve their input lane 0 in target lane 0, input
 * lane 3 in target lane 1, input lane 1 in target lane 3, and input lane 2
 * in target lane 4. Target lane 2 is caller-computed in every observed flow.
 * The target also reads float state before its later membership branches.
 */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct FUN_08840af8_context FUN_08840af8_context;
typedef struct FUN_08840af8_record FUN_08840af8_record;

/* Independently corroborated callable contracts. */
extern u32 FUN_0885f610(void *unused_context, u32 value);
extern int FUN_088a52b0(const u8 *record, u8 value);

/* Pending: neither owner nor callable ABI is established. */
extern u32 FUN_088a7a98(void);

/*
 * Provisional lanes only. Do not compile this declaration while the computed
 * third GPR lane, return semantics, float-field ownership, and both calls to
 * FUN_088a7a98 remain unproved.
 */
u32 FUN_08840af8_view(FUN_08840af8_context *context,
                      u32 caller_lane_3,
                      u32 caller_computed_lane,
                      u32 caller_lane_1,
                      FUN_08840af8_record *caller_lane_2);
