/*
 * Purpose: preserve the independently observed opening control paths of
 * FUN_08835f0c without inventing its unresolved local-work and callback ABI.
 *
 * This is an uncompiled field view.  Synthetic artificial-state probes show
 * that global-state byte +0x33e28 gates all direct helpers; the verified
 * marker count helper must produce a nonzero result before FUN_08835e20 is
 * entered.  Its produced local data can reach FUN_08839700 and then an
 * unresolved indirect target, so this is not a whole candidate.
 */
typedef unsigned char u8;

extern u8 *D_09bf5250;
extern void *FUN_0882fc38(void);       /* verified pointer getter */
extern int FUN_088396c4(void);         /* verified marker counter */
extern void FUN_08835e20(void);        /* callable ABI unresolved */
extern void FUN_08839700(void);        /* callable ABI unresolved */

/* Observed readable control skeleton; local layouts and return ABI unknown.
void FUN_08835f0c_partial_flow(void)
{
    if (D_09bf5250[0x33e28] == 0)
        return;
    (void)FUN_0882fc38();
    if (FUN_088396c4() != 0)
        FUN_08835e20();
}
*/
