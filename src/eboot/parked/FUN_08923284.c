/*
 * FUN_08923284: initialize state five and choose its mode from a global flag.
 *
 * Main EBOOT, attempt-high-01 medium batch 13. State roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_09bc1ed8;void FUN_089221e0(void *);void FUN_0891f02c(void *,int,int,int,int,int);void FUN_0891f064(void *,int);
int FUN_08923284(u8 *record)
{record[0x15]=2;record[0x1c5]=9;record[0x1c0]=0;record[0x1c1]=0;record[0x1c6]=0;record[0x4ba]=0;FUN_089221e0(record);FUN_0891f02c(record,1,5,(short)(*(signed char *)(record+0x8e2)+0x1a),0,0);FUN_0891f064(record,-1);record[0x8e1]=0;if((*(u32 *)(D_09bc1ed8+0x10fa354)&1)==0)record[0xc]=4;else record[0xc]=3;record[0x8e0]=0;return 1;}
