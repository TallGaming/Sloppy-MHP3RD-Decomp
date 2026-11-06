/*
 * FUN_088bc4cc: advance a nonzero 16-bit multiplicative state modulo a prime.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: constant-modulo lowering is shorter than the reference arithmetic sequence.
 */
typedef unsigned short u16; typedef unsigned int u32;
void FUN_088bc4cc(unsigned char *state){u16 *p=(u16 *)(state+0x21b6);if(*p==0){*p=0xb0;return;}*p=(u16)(((u32)*p*0xb0)%0xff53);}
