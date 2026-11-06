/*
 * FUN_088be6cc: send a small packet containing the current nonnegative index.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: packet-field initialization and branch setup lower much shorter.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; extern void *D_09bb7bc0; int FUN_088be6c0(void); void FUN_088c26bc(void *,int,void *,int);
struct Packet{u8 command,pad;u16 zero,high,low,which;};
void FUN_088be6cc(void *unused,char alternate){struct Packet p;int value=FUN_088be6c0();p.command=0x1a;p.zero=0;p.low=0;if(value>=0)p.low=value;p.high=(u32)(value>=0?value:0)>>16;p.which=alternate?1:0;FUN_088c26bc(D_09bb7bc0,6,&p,1);}
