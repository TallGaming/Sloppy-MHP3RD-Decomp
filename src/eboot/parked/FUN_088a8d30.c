/*
 * FUN_088a8d30: query indexed object state when its slot is in range.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: global lookup and conditional call lower to a longer frame.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_08aace80; int FUN_08868e08(void *,int); int FUN_08868e88(void *,u32,u8,u16);
int FUN_088a8d30(u8 *o,u32 index){ int slot=FUN_08868e08(D_08aace80,index&0xff); if(slot<5)return FUN_08868e88(D_08aace80,index,o[0x448],FIELD(o,u16,0x492+slot*0x10)); return 0; }
