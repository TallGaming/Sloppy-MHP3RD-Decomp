/*
 * Purpose: mode-selecting six-byte packet snapshot helper used by 34 callers.
 *
 * Evidence: arg0 is zero or one at five independently reviewed callers.  The
 * helper snapshots a word and an unsigned halfword from an unbound global
 * source, then makes four six-byte calls through the verified memcpy wrapper.
 * Two copies target the unbound D_08a2990c address.  The branch tests the low
 * byte of arg0; it separates the copy preparation from the later packet path.
 *
 * This declaration-only partial must not be compiled.  The 6-byte stack
 * packet's owner, D_08a2990c's public binding, and the conditional path's
 * packet-dispatch ownership have not been proven.  A fabricated packed struct
 * or guessed callback ABI would not be suitable for an exact C candidate.
 */
typedef unsigned char MhpBool8;

void FUN_088301bc(MhpBool8 mode);
