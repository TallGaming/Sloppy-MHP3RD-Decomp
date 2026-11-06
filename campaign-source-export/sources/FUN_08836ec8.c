/*
 * Purpose: retain the supported partial packet-sequencing control view for
 * FUN_08836ec8 without guessing its input-object ABI or packet layout.
 *
 * Synthetic-only artificial-state execution reaches the same ordered setup
 * sequence through FUN_0882fc38, FUN_088ebb10, FUN_088301bc, FUN_0882fc5c,
 * FUN_0882fea4, FUN_0882febc, and FUN_0883012c.  The return from
 * FUN_0883012c controls whether FUN_0883b0b0 is reached; a nonzero observed
 * result bypasses that final call.  Distinct artificial first integer-lane
 * values survive to the observed return while not being forwarded to the
 * direct callees.  This agrees with a status-preserving shape but does not
 * prove the target's formal parameters or object fields.
 *
 * Two whole-text direct calls fall in an incomplete caller interval nearest
 * the FUN_08837c9c census boundary, but that interval has no recovered caller
 * ABI view.  Several dependencies are also explicitly PARKED/unclassified.
 * This is intentionally an uncompiled partial view rather than a speculative
 * candidate.
 */
