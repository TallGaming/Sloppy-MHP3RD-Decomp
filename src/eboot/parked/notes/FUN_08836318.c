/*
 * Purpose: retain a readable, uncompiled helper-flow view of FUN_08836318.
 *
 * Artificial-state probing establishes a no-argument path that obtains the
 * shared packet pointer, invokes seven helpers in a fixed order, supplies
 * the global-state field at +0x366 to the packet-copy helper, and returns
 * zero even when the final submission helper reports different artificial
 * values.  PARKED helper declarations and the entry's indirect registration
 * context remain unresolved, so this is not a whole candidate.
 */
typedef unsigned char u8;

extern u8 *D_09bf5250;
extern void *FUN_0882fc38(void);       /* verified pointer getter */
extern int FUN_08830270(void *, const void *); /* verified packet helper */
extern void FUN_088ebb10(void);        /* ABI incomplete legacy thunk */
extern void FUN_088301bc(void);        /* PARKED ABI */
extern void FUN_0882fc5c(void);        /* PARKED ABI */
extern void FUN_0882febc(void);        /* PARKED ABI */
extern void FUN_0883012c(void);        /* PARKED ABI */

/* The supported skeleton intentionally excludes guessed local packet layout.
void FUN_08836318_partial_flow(void)
{
    void *packet = FUN_0882fc38();
    FUN_088ebb10();
    FUN_088301bc();
    FUN_0882fc5c();
    FUN_08830270(packet, D_09bf5250 + 0x366);
    FUN_0882febc();
    FUN_0883012c();
}
*/
