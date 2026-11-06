/*
 * FUN_088a46fc: copy two three-word vectors selected by an object descriptor.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: vector-table base lacks a symbol and copy scheduling differs.
 */
typedef unsigned char u8; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u8 D_089f4504;
void FUN_088a46fc(u8 *o,u32 *a,u32 *b){ u32 n=FIELD(FIELD(o,u8 *,0xd88),u8,6); u8 *p=&D_089f4504+n*0x18;
 if(n){ a[0]=FIELD(p,u32,0); a[1]=FIELD(p,u32,4); a[2]=FIELD(p,u32,8); b[0]=FIELD(p,u32,0xc); b[1]=FIELD(p,u32,0x10); b[2]=FIELD(p,u32,0x14); } }
