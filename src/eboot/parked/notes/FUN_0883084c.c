/*
 * Purpose: retain the supported dependency and ABI field view for this
 * indirect-only target; this is not a whole-function candidate.
 *
 * The target has no discovered direct callers and invokes registered wrapper
 * entries, formatted output, strlen, memcmp, and one unclassified dependency.
 * Its own parameter and result ABI remain unresolved, so no behavior body is
 * asserted or compiled.
 */
#include <stddef.h>
#include <string.h>

extern void FUN_088ebb10(void);
extern void FUN_088ebb18(void);
extern int FUN_08961100(void);
extern int memcmp(const void *, const void *, size_t);
extern size_t strlen(const char *);
