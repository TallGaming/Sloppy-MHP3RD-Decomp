/*
 * FUN_088a50bc: restore saved fields or clear a fallback object region.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: saved-field globals and indirect callback scheduling differ.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u32 D_09bb7a64,D_09bb7a68,D_09bb7a6c; extern u16 D_09bb7a78,D_09bb7a7a;
typedef void (*Call)(void); void FUN_088ebb10(void *,int,u32);
void FUN_088a50bc(u8 *o){ if(FIELD(o,short,0xcb2)<1){ FIELD(o,u32,0x2d8)=D_09bb7a64; FIELD(o,u16,0x318)=D_09bb7a78;
 FIELD(o,u32,0x2dc)=D_09bb7a68; FIELD(o,u32,0x2e0)=D_09bb7a6c; FIELD(o,u16,0x31a)=D_09bb7a7a;
 FIELD(o,u32,0x2e4)=D_09bb7a64; FIELD(o,u32,0x2e8)=D_09bb7a68; FIELD(o,u32,0x2ec)=D_09bb7a6c; ((Call)(*(void ***)o)[0x3b])(); }
 else FUN_088ebb10(o+0x2d8,0,0x5c); }
