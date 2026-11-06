/*
 * FUN_088a8db4: resolve a byte property when indexed object state is available.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two global lookups and nested branches lower differently.
 */
typedef unsigned char u8; typedef short s16;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_08aace80,*D_08a3345c; int FUN_088a8d30(void *,u8); int FUN_08868e08(void *,int); u8 *FUN_0885c3dc(void *,int,int);
u8 FUN_088a8db4(u8 *o,u8 index){ if(FUN_088a8d30(o,index)){ int slot=FUN_08868e08(D_08aace80,index); if(slot<5)return FUN_0885c3dc(D_08a3345c,slot&0xff,FIELD(o,s16,0x492+slot*0x10))[0x13]; } return 0; }
