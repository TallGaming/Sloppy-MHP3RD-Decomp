/*
 * FUN_088b6544: set a pending byte on eligible objects when the game is in mode two.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the six-object byte-update loop remains one instruction short.
 */
typedef unsigned char u8; extern void *D_09bb7e90; int FUN_088cca4c(void *);
void FUN_088b6544(int owner){int p;int count;if(FUN_088cca4c(D_09bb7e90)!=2)return;count=0;do{p=*(int *)(owner+0x20);count++;owner+=4;if(p&&*(char *)(p+0x134d6)==0)*(u8 *)(p+0x134d7)=1;}while(count!=6);}
