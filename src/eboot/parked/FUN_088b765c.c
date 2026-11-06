/*
 * FUN_088b765c: mark the first eight identifier matches with a delay and state bit.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains two state-update allocation differences.
 */
typedef unsigned char u8; typedef unsigned int u32; int FUN_088b5dec(void *,int,int);
void FUN_088b765c(void *owner){int p;int i=0;do{p=FUN_088b5dec(owner,i,1);i++;if(p){*(u8 *)(p+0x115)=10;*(u32 *)(p+4)=*(u32 *)(p+4)|4;}}while(i!=8);}
