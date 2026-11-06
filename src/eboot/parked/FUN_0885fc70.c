/*
 * Purpose: record the supported entry guard for FUN_0885fc70.  This is an
 * uncompiled partial field view; the child-call ABIs remain unresolved.
 */
#include <stdint.h>

extern void *D_08aace80;
extern void *D_08a3345c;
extern int FUN_088677a4(void *state);
extern void FUN_0885ec98(void *service);

uint16_t FUN_0885fc70(uint32_t unknown, const uint8_t *first, const uint8_t *second)
{
    (void)unknown;
    if (FUN_088677a4(D_08aace80) <= 0 || *first == 0 || *second == 0) {
        return UINT16_MAX;
    }

    FUN_0885ec98(D_08a3345c);
    return 0;
}
