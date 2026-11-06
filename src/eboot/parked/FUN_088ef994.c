/* FUN_088ef994: release an active indexed channel and clear its status.
 * PARKED: compiler folds duplicate branches and produces a shorter function. */
typedef unsigned int u32;typedef unsigned char u8;void FUN_088ef89c(void *,u32,unsigned short);
void FUN_088ef994(u8 *owner,u32 index){u8 *p=owner+(index&0xff)*0x18;if(p[1]!=0){if((p[1]&2)==0){FUN_088ef89c(owner,(u32)(*(int *)(p+8)-*(int *)(owner+0xf0))>>7,*(unsigned short *)(p+2));p[1]=0;}else{FUN_088ef89c(owner,(u32)(*(int *)(p+8)-*(int *)(owner+0xf0))>>7,*(unsigned short *)(p+2));p[1]=0;}}}
