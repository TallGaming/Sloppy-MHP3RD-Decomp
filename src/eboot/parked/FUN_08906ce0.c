/*
 * FUN_08906ce0: add a mode-selected table byte, two, and the record classification.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Global table and mode roles are hypotheses.
 */

typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16;
char FUN_08943a40(void *table,u16 key); char FUN_08943a68(void *table,u16 key); int FUN_08906c14(void *record);
int FUN_08906ce0(u8 *record,char mode)
{
    char first;if(mode==1)first=FUN_08943a40(*(void **)0x09befbd4,*(u16 *)(record+0x96));else first=FUN_08943a68(*(void **)0x09befbd4,*(u16 *)(record+0x96));return (s8)(first+2+(char)FUN_08906c14(record));
}
