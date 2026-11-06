/*
 * FUN_088bd11c: sum a signed value across four objects when an id is present.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: four-object signed accumulation remains shorter and differently allocated.
 */
typedef unsigned short u16; extern void *D_09bb7a80; int FUN_088f2e04(void *,u16); void *FUN_088b51b8(void *,int,int); short FUN_088a58fc(void *,u16);
int FUN_088bd11c(unsigned char *owner,u16 id){int i,total=0;if(FUN_088f2e04(*(void **)(owner+0x10),id)==-1)return 0;i=0;do{void *p=FUN_088b51b8(D_09bb7a80,i,1);i++;if(p)total=(short)(total+FUN_088a58fc(p,id));}while(i!=4);return total;}
