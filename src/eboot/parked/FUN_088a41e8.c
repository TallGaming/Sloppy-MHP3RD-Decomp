/*
 * FUN_088a41e8: fill seven short fields from a global lookup helper.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size lookup loop retains two operation/register differences.
 */
typedef unsigned char u8; typedef unsigned short u16;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_08aace80; u16 FUN_088684f8(void *,u16,int);
void FUN_088a41e8(u8 *o){ int i; for(i=0;i<7;i++) FIELD(o,u16,0x4e6+i*2)=FUN_088684f8(D_08aace80,FIELD(o,u16,0x60),i); }
