/*
 * FUN_0894ccf4: submit the current record fields to a fourteen-argument service.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Service role is a hypothesis.
 */
typedef unsigned char u8;
extern u8 *D_08aace80; extern int D_08a19058;
void FUN_09c63860(int, int, int, int, int, void *, void *, int, int, int, int, int, int, int, int);
void FUN_0894ccf4(u8 *record)
{
    FUN_09c63860(record[8], -1, (signed char)record[9], 5, 0, &D_08a19058, D_08aace80 + 0x5daec, 0, 0, 1, 1, 4, 0, 1, (signed char)record[0x4a58]);
}
