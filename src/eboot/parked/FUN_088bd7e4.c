/*
 * FUN_088bd7e4: send one of two packed owner values in a small command packet.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: packet-field stores and branch-specific setup lower much shorter.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; extern void *D_09bb7bc0; void FUN_088c26bc(void *,int,void *,int);
struct Packet{u8 command,pad;u16 zero,high,low,which;};
void FUN_088bd7e4(u8 *owner,char alternate){struct Packet p;u32 value=*(u32 *)(owner+(alternate?0x21d8:0x21d4));p.command=0x1b;p.zero=0;p.high=value>>16;p.low=value;p.which=alternate?1:0;FUN_088c26bc(D_09bb7bc0,6,&p,0);}
