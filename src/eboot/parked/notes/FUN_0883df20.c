/* Purpose: uncompiled field/ABI view for the dependency-heavy dispatcher. */
typedef struct FUN_0883df20_record FUN_0883df20_record;

/*
 * Synthetic target execution with artificial scalar inputs corroborates that
 * the initial FUN_0883dc9c call receives target integer lanes 0, 3, a zero
 * lane, 1, and 2 in its first five outgoing integer positions.  The target
 * also directly reaches registered FUN_08867d40 five times, LIBRARY
 * FUN_0880e1d4 three times, and PARKED FUN_08904570 four times.  The latter
 * dispatcher has a corroborated record lane but an incomplete full contract.
 *
 * The three real callers do not establish a complete object layout or return
 * contract.  This is intentionally not a callable candidate and is not
 * compiled.
 */
unsigned int FUN_0883df20(void *unknown_lane0,
                           FUN_0883df20_record *unknown_lane1,
                           unsigned int unknown_lane2,
                           unsigned int unknown_lane3);
