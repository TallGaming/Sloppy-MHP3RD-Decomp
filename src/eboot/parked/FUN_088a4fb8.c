/*
 * FUN_088a4fb8: search two global resource tables using virtual object data.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: repeated virtual lookups and global-table branches lower differently.
 */
typedef unsigned char u8; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u8 *D_09bb7a80; typedef u32 (*Get)(void *); int FUN_08879704(u32,u32,u32);
int FUN_088a4fb8(u8 *o,u32 index){ void **m=*(void ***)o; int r=0; u32 v;
 if(D_09bb7a80 && index<800){ v=((Get)m[0x11])(o); r=FUN_08879704(v,FIELD(D_09bb7a80,u32,0xcc),index);
  if(!r){ v=((Get)m[0x11])(o); r=FUN_08879704(v,FIELD(D_09bb7a80,u32,0xd4),index); } } return r; }
