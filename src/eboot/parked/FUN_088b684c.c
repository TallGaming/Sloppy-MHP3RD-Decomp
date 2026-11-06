/*
 * FUN_088b684c: clear seven indexed registrations and reset an owner slot.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: reset-loop and global-call scheduling remain longer and different.
 */
typedef unsigned char u8; extern void *D_09bb7a5c; void FUN_088a1294(void *,u8,int); void FUN_088a12a4(void *,u8); void FUN_088a129c(void *,u8);
void FUN_088b684c(u8 *owner,unsigned index){int i=0;index&=0xff;do{FUN_088a1294(D_09bb7a5c,index,i);i++;}while(i!=7);FUN_088a12a4(D_09bb7a5c,index);FUN_088a129c(D_09bb7a5c,index);*(void **)(owner+0x80+index*4)=0;}
