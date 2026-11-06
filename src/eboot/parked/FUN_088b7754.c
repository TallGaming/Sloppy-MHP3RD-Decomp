/*
 * FUN_088b7754: configure six secondary objects from two compact parameter records.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains global and external-call differences.
 */
typedef unsigned char u8; extern void *D_09bb7a80; void *FUN_088b5120(void *,int,int,int); void func_0x09cb0cd8(void *,u8,void *,u8,void *);
void FUN_088b7754(void *unused,u8 *a,u8 *b){int i=0;do{void *p=FUN_088b5120(D_09bb7a80,i,1,0);i++;if(p)func_0x09cb0cd8(p,a[0xd6],a+0x80,b[1],b+4);}while(i!=6);}
