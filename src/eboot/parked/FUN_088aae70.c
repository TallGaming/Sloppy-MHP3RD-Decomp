/*
 * FUN_088aae70: update transforms using one indexed sentinel chain.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: indexed chain-table global lacks a symbol and loop scheduling differs.
 */
typedef unsigned char u8; typedef short s16;
extern s16 *D_089e2744[]; void FUN_08875a3c(void *,void *,void *);
void FUN_088aae70(void *unused,u8 *out,u8 *base,s16 chain){ s16 *p=D_089e2744[chain]; while(*p!=-1){ int i=*p++; FUN_08875a3c(out+0x50,out+0x10,base+i*0x280+0x90);out+=0x280;} }
