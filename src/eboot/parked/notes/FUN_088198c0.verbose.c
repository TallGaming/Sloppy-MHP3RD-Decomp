/* Purpose: retain the supported interfaces for the verbose-termination
 * handler candidate at FUN_088198c0. No target definition is claimed.
 *
 * The current-exception-type query, demangler, release, abort and standard
 * error reporting call pattern matches the public GCC vterminate.cc role.
 * This replaces the weaker unexpected-handler/header-input hypothesis.
 * Target C++ configuration, EH boundaries and all data bindings remain
 * unproved, so this is an uncompiled partial with no matching credit.
 */
struct __sFILE;

extern void *FUN_08819180(void);
extern char *FUN_0881830c(const char *name, char *buffer,
                          unsigned int *length, int *status);
extern void FUN_0880b6e4(void *allocation);
extern int FUN_0880a960(const char *text, struct __sFILE *stream);
extern void FUN_08808c00(void);
