/*
 * Purpose: retain the independently observed control interface for FUN_08845aac.
 *
 * The target has one direct manager-operation call and two terminal external
 * dispatches.  Its target-specific argument and field ABI are not recovered;
 * this is intentionally an uncompiled field view, not a matching candidate.
 */
typedef unsigned int u32;

typedef struct Manager Manager;

extern void FUN_088fa2b0(Manager *manager, int operation, int enabled);
extern void FUN_088ffe54(void);
extern void FUN_08900bf0(void);

/* Callers and the direct dispatch edges require further typed-flow recovery. */
void FUN_08845aac(void);
