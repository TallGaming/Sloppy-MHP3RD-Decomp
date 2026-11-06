/*
 * FUN_0892865c: submit record settings for an explicit or active object.
 *
 * Main EBOOT, attempt-high-01 medium batch 14. Setting roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;void *FUN_088b51b8(void *,int,int);void FUN_08850ee4(void *,void *,int,int,int,int);
void FUN_0892865c(u8 *record,void *object)
{if(object==0)object=FUN_088b51b8(*(void **)0x09bb7a80,D_08aace80[0x26],0);FUN_08850ee4(*(void **)0x08a31df0,object,record[0xd],record[0xe],record[0x4ba],*(signed char *)(record+0x733));}
