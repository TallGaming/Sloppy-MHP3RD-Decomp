/*
 * Purpose: preserve the supported recovery boundary for FUN_08834ff8.
 *
 * The declared target has no direct callers or materialized-address references
 * in the current census. Its safe control-flow summary resolves eight direct
 * call destinations, but three are unclassified and two registered wrappers
 * retain an unknown pass-through ABI. Artificial scalar probes encounter a
 * control-flow exit outside the declared interval. This uncompiled field/ABI
 * view is not a whole C candidate.
 */
