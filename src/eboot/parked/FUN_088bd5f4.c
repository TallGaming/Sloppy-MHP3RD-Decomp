/*
 * FUN_088bd5f4: dispatch a byte through a 63-entry global jump table.
 *
 * Main EBOOT, G2 exhaustive mid-range attempt. Names and types are hypotheses.
 * PARKED: the internal switch table lacks a symbol and case recovery.
 */

typedef unsigned char u8;
typedef int (*Handler_088bd5f4)(void);

extern Handler_088bd5f4 D_08967d74[];

int FUN_088bd5f4(void *unused, u8 type)
{
    if (type < 63) {
        return D_08967d74[type]();
    }
    return 0;
}
