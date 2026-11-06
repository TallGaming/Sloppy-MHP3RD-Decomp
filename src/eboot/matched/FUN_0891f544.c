/*
 * FUN_0891f544: initialize record state zero with its activation flag.
 *
 * Main EBOOT, attempt-high-01 medium batch 11. State roles are hypotheses.
 */

typedef unsigned char u8;void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);
int FUN_0891f544(u8 *record)
{record[0x1c4]=1;record[0x15]=2;record[0x1c5]=11;record[0x1c0]=0;FUN_0891f02c(record,0,0,0,0,0);FUN_0891f064(record,-1);return 1;}
