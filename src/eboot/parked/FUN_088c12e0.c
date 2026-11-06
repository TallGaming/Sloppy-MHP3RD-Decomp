/*
 * FUN_088c12e0: send a value packet for the selected object and issue a notification.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size packet form retains four unsymbolized global relocations.
 */
typedef unsigned char u8; typedef unsigned short u16; extern u8 *D_08aace80; extern void *D_09bb7a80; extern void *D_09bb7bc0; extern void *D_09beb424; void *FUN_088b51b8(void *,int,int); short FUN_088a58fc(void *,u16); void FUN_088c26bc(void *,int,void *,int); void FUN_0890e198(void *,int,u16,int);
struct Packet{u8 command,pad;u16 zero,value,result;};
void FUN_088c12e0(void *unused,u16 value){struct Packet p;void *selected=FUN_088b51b8(D_09bb7a80,D_08aace80[0x26],1);p.command=0x18;p.zero=0;p.value=value;p.result=FUN_088a58fc(selected,value);FUN_088c26bc(D_09bb7bc0,6,&p,0);FUN_0890e198(D_09beb424,0x1e,value,0);}
