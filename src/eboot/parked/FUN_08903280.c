/*
 * FUN_08903280: initialize six adjacent 0x60-byte records from fixed tables.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Fixed table roles are hypotheses.
 */

typedef unsigned char u8;
void FUN_089031fc(void *record, void *source, int *table);

void FUN_08903280(u8 *record)
{
    FUN_089031fc(record+0x000,(void *)0x089fa7ac,(int *)0x089fa6fc);
    FUN_089031fc(record+0x060,(void *)0x089fa7c4,(int *)0x089fa6fc);
    FUN_089031fc(record+0x0c0,(void *)0x089fa7f4,(int *)0x089fa6d0);
    FUN_089031fc(record+0x120,(void *)0x089fa80c,(int *)0x089fa6d0);
    FUN_089031fc(record+0x180,(void *)0x089fa83c,(int *)0x089fa6a4);
    FUN_089031fc(record+0x1e0,(void *)0x089fa854,(int *)0x089fa6a4);
    record[0x240]=0;
}
