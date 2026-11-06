/*
 * FUN_088c71f4: map a caller value and publish all properties for one channel.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: merged caller-value mapping has exact size but different allocation.
 */
typedef unsigned short u16; int FUN_088c4a24(void *,int,int); void FUN_088c6fe8(void *,int,u16,int,int);
void FUN_088c71f4(unsigned char *owner,int channel,u16 value,int source){int base;if(channel)base=*(int *)(owner+0x727d50);else{base=*(int *)(owner+0x727d54);if(!base)base=*(int *)(owner+0x727d50);}FUN_088c6fe8(owner,channel,value,FUN_088c4a24(owner,source,base),0);}
