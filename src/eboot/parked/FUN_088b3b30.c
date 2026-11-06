/*
 * FUN_088b3b30: update one mode and submit it for every descriptor element.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: mode selection and descriptor loop allocation differ.
 */
typedef unsigned char u8; typedef unsigned short u16;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
void FUN_088b2b14(void *,int,int);void FUN_088b0e60(void *,int,int,int);
void FUN_088b3b30(u8 *o,signed char mode){int v=mode?0x12:0x11,i;if(mode){}FUN_088b2b14(o,mode,v);if(FIELD(FIELD(o,u8 *,0xf44),u16,0x1c)==0)return;
 for(i=0;i<FIELD(FIELD(o,u8 *,0xf44),u16,0x1c);i++)FUN_088b0e60(o,mode,i,v);}
