/*
 * FUN_088db080: emit a five-word graphics command sequence and finalize the frame.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size graphics command emission retains three global/call differences.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern u32 *D_08a31e88; extern void *D_08ab156c; void FUN_088dafc8(void); void FUN_0888426c(void *); void FUN_08883d94(void *,int);
void FUN_088db080(void){u32 *p;if(D_08aace80[0x60470])return;FUN_088dafc8();p=D_08a31e88;p[0]=0x4a000000;p[1]=0x4b000000;p[2]=0xdbff0007;p[3]=0xde000005;p[4]=0xe7000000;D_08a31e88=p+5;FUN_0888426c(D_08ab156c);FUN_08883d94(D_08ab156c,0);}
