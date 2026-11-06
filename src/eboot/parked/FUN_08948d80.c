/*
 * FUN_08948d80: initialize a container and destroy three embedded entry groups.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Group roles are hypotheses.
 */

typedef unsigned int u32;void FUN_088f9cd0(void *);
void FUN_08948d80(u32 *record)
{int count=2;u32 *entry=record+0xc55;record[2]=1;record[1]=0xc;record[0]=0x0896ba68;record[5]=0;do{count--;FUN_088f9cd0(entry);entry+=0x14;}while(count!=0);entry=record+0xc7d;count=9;do{count--;FUN_088f9cd0(entry);entry+=0x14;}while(count!=0);entry=record+0xd32;count=4;do{count--;FUN_088f9cd0(entry);entry+=0x14;}while(count!=0);record[6]=0;}
