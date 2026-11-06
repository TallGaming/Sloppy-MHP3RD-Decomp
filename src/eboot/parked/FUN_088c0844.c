/*
 * FUN_088c0844: send a compact command packet when the network flag is enabled.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: packet layout and unsymbolized network-state access lower differently.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; extern u8 *D_09bc1ed8; extern void *D_09bb7bc0; void FUN_088c26bc(void *,int,void *,int);
struct Packet{u8 command,pad;u16 zero,value,low;};
void FUN_088c0844(void *unused,u16 value,u16 low){struct Packet p;p.low=low&0xff;if((*(u32 *)(D_09bc1ed8+0x10fa354)&1)==0)return;p.command=0x28;p.zero=0;p.value=value;FUN_088c26bc(D_09bb7bc0,6,&p,0);}
