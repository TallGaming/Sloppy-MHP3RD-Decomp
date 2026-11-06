/*
 * FUN_088a7ebc: compute and clamp a short duration from two object states.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size lookup/clamp form uses different registers and scheduling.
 */
typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_08a3345c; u8 *FUN_0885be6c(void *,void *); int FUN_088a52b0(void *,int);
void FUN_088a7ebc(u8 *o){ u8 *p=FUN_0885be6c(D_08a3345c,o+0x478); s16 v=p[9]*0x32+0x96; FIELD(o,u16,0x5cc)=v;
 if(FUN_088a52b0(o,0x17)!=0){v+=0x32;FIELD(o,s16,0x5cc)=v;} if(v>400)FIELD(o,u16,0x5cc)=400; }
