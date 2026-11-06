/*
 * Purpose: retain the ABI recovery boundary for FUN_0883843c.
 *
 * This is intentionally an uncompiled partial field view, not a C candidate.
 * Local target analysis shows normal-return control flow plus an indirect
 * non-return transfer. No direct callers and no direct callee relation bind
 * argument lanes, result type, or the indirect-transfer object layout.
 * Synthetic scalar witnesses also leave the assigned interval through that
 * unresolved transfer. The adjacent FUN_088386c0 callback entry is a verified
 * opaque code-pointer binding, but no actual target relation reached it.
 */
