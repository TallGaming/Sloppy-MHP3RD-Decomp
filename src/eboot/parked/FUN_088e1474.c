/*
 * FUN_088e1474: populate a result, normalize its second float, and report success.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: normalized result path remains longer and differently allocated.
 */
typedef unsigned char u8; u8 FUN_088dc600(void *,int,int); int FUN_088e1140(void *,float *,int,int);
int FUN_088e1474(void *owner,float *out,int record,int arg){u8 index=FUN_088dc600(owner,record,arg);*((u8 *)out+8)=index;if(!FUN_088e1140(owner,out,record,arg)){out[0]=0.0f;out[1]=0.0f;return 0;}out[1]=out[0] / *(float *)(record+0x10c+index*0x10);return 1;}
