/*
 * FUN_088a429c: select a matching descriptor from a sentinel-terminated table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: descriptor-table globals lack symbols and nested loop lowering differs.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u8 D_089ed9a0; extern s16 D_089ed9b4; void FUN_088ebb10(void *,int,u32);
void FUN_088a429c(u8 *o,s16 key,u16 type)
{ u8 *p=(u8 *)&D_089ed9b4; FIELD(o,u32,0xdcc)=0xffffffff; FIELD(o,void *,0xd88)=&D_089ed9a0; FUN_088ebb10(o+0xd8c,0,0x40);
  while(FIELD(p,s16,0)!=-1){ if(FIELD(p,s16,0)==key && FIELD(p,u8,2)==type) FIELD(o,void *,0xd88)=p; p+=0x14; } }
