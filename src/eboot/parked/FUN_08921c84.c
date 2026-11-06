/*
 * FUN_08921c84: activate a record state when the global save check succeeds.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. State roles are hypotheses.
 */

typedef unsigned char u8;extern void *D_08aace80;void FUN_0886c774(void *);int FUN_0886c70c(void *,int);void FUN_08921c40(void *);void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);
int FUN_08921c84(u8 *record)
{int result;FUN_0886c774(D_08aace80);result=FUN_0886c70c(D_08aace80,0);if(result!=0){FUN_08921c40(record);record[0x6d5]=1;record[0x15]=2;record[0x1c5]=5;FUN_0891f02c(record,0,-1,0,0,0);FUN_0891f064(record,-1);}return result!=0;}
