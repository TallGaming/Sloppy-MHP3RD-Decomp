/*
 * FUN_088d0494: publish a default entry followed by every variable-length record entry.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: variable-record indexing remains shorter and differently allocated.
 */
typedef unsigned char u8; extern void *D_09bb7e78; void FUN_088c81e8(void *,int,int,unsigned,int,int);
void FUN_088d0494(u8 *owner){unsigned i=0;FUN_088c81e8(D_09bb7e78,0xc,9,0,-1,0);if(*(int *)(owner+0x20)==0)return;do{u8 *p=*(u8 **)(owner+0x28)+i*0x40;i++;FUN_088c81e8(D_09bb7e78,p[0x2f],9,i,-1,0);}while(i<*(unsigned *)(owner+0x20));}
