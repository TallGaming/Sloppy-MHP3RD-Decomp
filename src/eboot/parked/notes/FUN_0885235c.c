/*
 * Purpose: retain the recovery boundary for FUN_0885235c, a scalar dispatcher
 * reached from three declared game functions.
 *
 * The bounded evidence identifies three unresolved direct dependencies,
 * including FUN_08851da8.  It does not establish entry arguments, return use,
 * or the context layout shared with the callers.  This deliberately remains
 * a declaration-only, uncompiled field view instead of inventing a callable
 * C contract or a behaviorless body.
 */

/* Entry ABI is unresolved; this old-style declaration does not specify parameters. */
void FUN_0885235c();
