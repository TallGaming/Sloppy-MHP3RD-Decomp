/*
 * Purpose: retain the supported external boundary of this unresolved
 * diagnostic-style routine without claiming a callable implementation.
 *
 * Local review confirms calls to the public newlib printf and puts wrappers,
 * plus both nearby four-byte record predicates.  The declared incoming caller
 * forwards a slot-lookup result as lane one; that result is pointer-shaped but
 * the pointed-to object's layout and this routine's result contract remain
 * unresolved.  Therefore this is an uncompiled dependency view, not a
 * candidate definition.
 */
extern int FUN_0880d4b4(const char *format, ...);
extern int FUN_0880d590(const char *text);
extern int FUN_08858f5c(const char *record);
extern unsigned int FUN_08858f8c(const void *value);

struct FUN_0885901c_dependency_view {
    int (*print)(const char *format, ...);
    int (*put_line)(const char *text);
    int (*matches_first_key)(const char *record);
    unsigned int (*matches_second_key)(const void *value);
};

void FUN_0885901c(const void *slot_value);
