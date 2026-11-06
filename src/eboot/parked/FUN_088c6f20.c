/*
 * FUN_088c6f20: find a 16-bit value among twenty-one global channel entries.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: every ordinary operation matches; one local jump target encoding differs.
 */
typedef unsigned short u16; extern void *D_09bc1ac0; unsigned FUN_088db9a4(void *,int);
int FUN_088c6f20(void *unused,unsigned value){int i=0;do{if(FUN_088db9a4(D_09bc1ac0,i)==(u16)value)return i;i++;}while(i!=0x15);return -1;}
