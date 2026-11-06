/*
 * FUN_0891dd74: activate the selected state entry and submit its two values.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. State and entry roles are hypotheses.
 */

typedef unsigned char u8;typedef short s16;extern void *D_08a31e84;void FUN_08855d14(void *,int,int,int);
void FUN_0891dd74(u8 *record)
{u8 *entry;s16 value;if(*(signed char *)((u8 *)0x08aacea4+0x88)==0||*(signed char *)(record+0x28)==0||*(signed char *)(record+0x29)==0)return;entry=record+*(signed char *)(record+0x2c)*4;value=**(s16 **)(record+0x30);*(s16 **)(entry+0x3c)=*(s16 **)(record+0x30);*(int *)(entry+0x34)=value;*(s16 *)(record+0x2a)=value;FUN_08855d14(D_08a31e84,value&0xff,*(int *)(entry+0x60),*(int *)(entry+0x68));*(int *)(record+0x14)=6;record[0x29]=0;}
