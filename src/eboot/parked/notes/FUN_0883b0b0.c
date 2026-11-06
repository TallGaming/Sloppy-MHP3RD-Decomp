/* Purpose: retain the supported event-dispatch entry view without inventing
 * the callback-table object or event payload ABI.  Three real callers pass
 * distinct kind values (0, 1, and 2).  The target conditionally compares
 * six-byte records through verified FUN_088305b4. Artificial comparison
 * probes show a kind-indexed equal-record return regime and a status-result
 * unequal-record regime, but callback ownership, remaining pointer lanes,
 * and the formal return contract are unresolved. */
extern int FUN_088305b4(const void *left, const void *right);
void FUN_0883b0b0_partial_view(int kind, const void *context, const void *payload);
