/*
 * FUN_08915e94: combine a record-dependent value with a table adjustment.
 *
 * Main EBOOT, attempt-high-01 medium batch 7. Table role is a hypothesis.
 */

typedef unsigned char u8;typedef short s16;extern void *D_08aace80;s16 FUN_08868c78(void *,int,int);
s16 FUN_08915e94(u8 *record,unsigned index,int disabled)
{if(disabled!=0)return 0;return FUN_08868c78(D_08aace80,record[0x63],index)+((s16 *)0x089e2914)[index&0xff];}
