/*
 * FUN_08906b04: multiply a mode-selected table value by a record-derived float.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Global table and mode roles are hypotheses.
 */

typedef unsigned char u8; typedef unsigned short u16;
int FUN_08943ab8(void *table,u16 key); int FUN_08943ae0(void *table,u16 key); float FUN_08906ab8(void *record);
float FUN_08906b04(u8 *record,char mode)
{
    int value;if(mode==1)value=FUN_08943ab8(*(void **)0x09befbd4,*(u16 *)(record+0x96));else value=FUN_08943ae0(*(void **)0x09befbd4,*(u16 *)(record+0x96));return (float)value*FUN_08906ab8(record);
}
