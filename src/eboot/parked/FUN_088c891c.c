/*
 * FUN_088c891c: find a byte in the current global sequence and return its index.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: sequence search remains one instruction longer with different allocation.
 */
typedef unsigned char u8; extern void *D_09bb7e90; void *FUN_088ccf08(void *); u8 *FUN_088d2244(void *); int FUN_088d2250(void *);
unsigned FUN_088c891c(void *unused,unsigned value){unsigned i=0;u8 *data=FUN_088d2244(FUN_088ccf08(D_09bb7e90));for(;;){if(FUN_088d2250(FUN_088ccf08(D_09bb7e90))<=(int)i)return 0;if((char)data[i]==(u8)value)return i&0xff;i++;}}
