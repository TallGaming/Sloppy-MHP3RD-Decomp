/*
 * FUN_088d0560: initialize animation dimensions/state and invoke two object hooks.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size field initialization retains ten store/hook differences.
 */
typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef void (*Hook)(void *);
void FUN_088d0560(u32 *o){u8 *b=(u8 *)o;Hook first=(Hook)(*(void ***)o)[8];*(u16 *)(b+0x154)=0x1e0;*(u16 *)(b+0x156)=0x110;o[1]|=2;*(u16 *)(b+0x124)=0x1e0;*(u16 *)(b+0x13c)=0x1e0;*(u16 *)(b+0x14a)=0x110;*(u16 *)(b+0x118)=0;*(u16 *)(b+0x130)=0;*(u16 *)(b+0x148)=0;*(u16 *)(b+0x11a)=0;*(u16 *)(b+0x126)=0;*(u16 *)(b+0x11c)=0;*(u16 *)(b+0x14c)=0;*(u16 *)(b+0x134)=0;*(u16 *)(b+0x128)=0;*(u16 *)(b+0x158)=0;first(o);((Hook)(*(void ***)o)[6])(o);o[0x43]=0x14;o[0x44]=1;}
