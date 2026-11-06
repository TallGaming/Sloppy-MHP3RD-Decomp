/*
 * Purpose: retain the supported dependency boundary for FUN_08835e20.
 *
 * The target has one assembly-only direct caller in the current census. It
 * calls six targets: registered global-address accessor FUN_0882fc38, typed
 * byte-fill thunk FUN_088ebb10, packet preparer FUN_0882fc5c, big-endian
 * field copier FUN_0882febc, packet submitter FUN_0883012c, and snapshot
 * updater FUN_088301bc. Four of these are PARKED and their complete ABI
 * contracts remain unestablished. The target contains unaligned copy
 * operations, but its field layout and argument roles cannot be recovered
 * safely without those dependency contracts.
 *
 * This is an uncompiled field/ABI view, not a whole C candidate.
 */
