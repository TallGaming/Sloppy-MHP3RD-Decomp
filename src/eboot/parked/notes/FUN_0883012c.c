/*
 * Purpose: incomplete ABI field view for a game packet wrapper.
 *
 * Verified: the entry reads a0, performs a six-register call to the parked
 * packet routine FUN_0887cf30, and returns its scalar result to callers.
 * The complete input layout and the parked callee ABI remain unverified;
 * this is deliberately not a compilable match candidate.
 */
typedef struct PacketWrapperInput PacketWrapperInput;

int FUN_0883012c(const PacketWrapperInput *input); /* Incomplete declaration. */
