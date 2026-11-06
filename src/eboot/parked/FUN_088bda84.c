/*
 * FUN_088bda84: record a one-time bit and send the updated two-word mask.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size packet and bit-update form retains broad allocation differences.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; extern u8 *D_08aace80; extern void *D_09bb7bc0; void FUN_088c1f54(void *,int,void *);
struct Packet{u8 kind,index;u16 pad;u32 low,high;};
void FUN_088bda84(u8 *owner,u8 kind,u8 *record){struct Packet p;u32 *word,bit;if(D_08aace80[0x6ba]!=D_08aace80[0x26])return;p.index=record[5];word=(u32 *)(owner+0x1bb8+(p.index>>5)*4);bit=1u<<(p.index&31);if((*word&bit)==0)*word|=bit;else p.index=0xff;p.high=*(u32 *)(owner+0x1bbc);p.low=*(u32 *)(owner+0x1bb8);p.kind=kind;FUN_088c1f54(D_09bb7bc0,2,&p);}
