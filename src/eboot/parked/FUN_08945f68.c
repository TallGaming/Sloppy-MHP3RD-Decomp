/*
 * FUN_08945f68: clear forty pairs, reset counters and initialize a record.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Pair and counter roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned short u16;void FUN_089030a8(void *,int,int,int,int);
void FUN_08945f68(u8 *record)
{u16 *entry=(u16 *)(record+0x158);int count=0;do{count++;entry[0]=0;entry[1]=0;entry+=2;}while(count!=0x28);record[0x20d]=1;*(int *)(record+0x1f8)=0;*(int *)(record+0x1fc)=0;*(int *)(record+0x200)=0;*(int *)(record+0x204)=0;*(int *)(record+0x208)=0;record[0x20c]=1;record[0x20e]=0;record[0x20f]=0;FUN_089030a8(record,0,0,1,1);}
