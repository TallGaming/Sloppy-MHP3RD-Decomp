/*
 * FUN_088cfcf8: derive current session state, publish it, and process owner entries.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: repeated session-state extraction remains one instruction short and different.
 */
typedef unsigned char u8; typedef unsigned short u16; extern u8 *D_08a31e84; extern u8 *D_09beb0bc; extern void *D_09c47be0; int FUN_08864f48(void *,int); void func_0x09c189f8(void *,void *); int FUN_088ccbcc(void *); void FUN_088ce8b0(void *,void *,int); void FUN_088cd8f0(void *);
void FUN_088cfcf8(void *owner){void *value=0;int mode;if(*(u16 *)(D_08a31e84+0xc)&2)value=*(void **)(D_08a31e84+0x10);*(int *)(D_09beb0bc+0xca4)=FUN_08864f48(value,0);value=0;if(*(u16 *)(D_08a31e84+0xc)&2)value=*(void **)(D_08a31e84+0x10);func_0x09c189f8(D_09c47be0,value);mode=FUN_088ccbcc(owner);value=0;if(*(u16 *)(D_08a31e84+0xc)&2)value=*(void **)(D_08a31e84+0x10);FUN_088ce8b0(owner,value,mode*2+1);FUN_088cd8f0(owner);}
