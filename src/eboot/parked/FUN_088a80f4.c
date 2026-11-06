/*
 * FUN_088a80f4: scale and wrap a short value when a special state is active.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: scalar float conversion cannot reproduce the reference VFPU path.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern float D_089674ac,D_089674b0; int FUN_088a52f8(void *,signed char);
u32 FUN_088a80f4(u8 *o){ u16 v=FIELD(o,u16,0x2d2); float f; if(!FUN_088a52f8(o,0x1e)||o[0x5a9]!=1)return v;
 f=(float)v*D_089674ac; if(f>=D_089674b0)f-=D_089674b0; return ((int)f)&0xffff; }
