/*
 * FUN_0891905c: advance a three-state record-selection operation.
 *
 * Main EBOOT, attempt-high-01 medium batch 8. State roles are hypotheses.
 */

typedef unsigned char u8;int FUN_0891d0e8(void);signed char FUN_0891cab0(void *);void *FUN_0891d510(void *);
int FUN_0891905c(u8 *record)
{int state=*(int *)(record+0x78);signed char index;if(state==1){if(FUN_0891d0e8()!=0){index=FUN_0891cab0(record);record[0x88]=(u8)index;state=2;if(index!=-1)*(int *)(record+0x84)=(int)((u8 *)FUN_0891d510(record)+index*0x34+4);goto finish;}}else{if(state==2)return 1;if(state!=0)goto finish;}state=1;finish:*(int *)(record+0x78)=state;return 0;}
