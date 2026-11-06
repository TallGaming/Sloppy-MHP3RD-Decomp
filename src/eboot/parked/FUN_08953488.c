/*
 * FUN_08953488: dispatch a record action according to its state byte.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Record and action roles are hypotheses.
 */
typedef unsigned char u8; typedef unsigned short u16;
void FUN_0895335c(void); int FUN_0894ba9c(void); void FUN_0894b3c4(void *, u16);
void FUN_08953488(u8 *record)
{
    signed char state = record[0x17];
    if (state == 1 || state == 2) { FUN_0895335c(); return; }
    if (state == 0) { int index = FUN_0894ba9c(); FUN_0894b3c4(record, *(u16 *)(record + 0x24 + index * 0x10)); }
}
