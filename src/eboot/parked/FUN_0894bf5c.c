/*
 * FUN_0894bf5c: classify whether a selected record is usable by two services.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Record and service roles are hypotheses.
 */
typedef unsigned char u8;
extern u8 *D_08aace80;
extern void *D_09c483b0;
int FUN_08906550(void *record);
int FUN_09c358b4(void *service, void *record);
int FUN_0894bf5c(int unused, signed char index)
{
    u8 *record = D_08aace80 + index * 0xa0 + 0x5daec;
    if (FUN_08906550(record) == 0) return 1;
    if (FUN_09c358b4(D_09c483b0, record) == 0) return 0;
    return 2;
}
