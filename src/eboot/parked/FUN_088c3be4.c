/*
 * FUN_088c3be4: assemble and submit a flagged audio command record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size partial-record stores retain broad stack allocation differences.
 */
typedef unsigned int u32; void thunk_FUN_0885aa60(int,void *);
void FUN_088c3be4(int unused,int target,int value,int extra,int p5,int p6){u32 record[16];record[0]=0x1200;if(p6){record[0]=0x5200;record[15]=p6;}if(p5){record[0]|=0x400;record[11]=p5;}record[10]=extra;record[13]=value;thunk_FUN_0885aa60(target,record);}
