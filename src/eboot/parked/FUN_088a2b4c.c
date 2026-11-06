/*
 * FUN_088a2b4c: initialize an object and its two embedded subobjects.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: code shape matches, but the object vtable lacks an absolute symbol.
 */
typedef unsigned char u8; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u8 D_0896ad18; void FUN_088f9cd0(void *);
void FUN_088a2b4c(u8 *o)
{ FIELD(o,u32,8)=1; FIELD(o,u32,4)=12; FIELD(o,void *,0)=&D_0896ad18; FIELD(o,u32,0x14)=0;
  FUN_088f9cd0(o+0x38); FUN_088f9cd0(o+0x88); FIELD(o,u32,0x1c)=0; FIELD(o,u32,0x20)=0; }
