/*
 * FUN_088c3c48: assemble, normalize, and submit a flagged audio command record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size normalized record retains broad stack allocation differences.
 */
typedef unsigned int u32; void FUN_08854e80(void *); void thunk_FUN_0885aa60(int,void *);
void FUN_088c3c48(int unused,int target,int value,int p4,int p5){u32 record[16];record[0]=0x1000;if(p5){record[0]=0x5000;record[15]=p5;}if(p4){record[0]|=0x400;record[11]=p4;}record[13]=value;FUN_08854e80(record);thunk_FUN_0885aa60(target,record);}
