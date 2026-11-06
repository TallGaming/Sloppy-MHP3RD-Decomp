/*
 * FUN_088bbcd4: detach one object from matching slots and clear selected ownership.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: selected-owner and slot-clear control flow remain shorter and different.
 */
typedef unsigned char u8; extern u8 *D_08aace80; extern void *D_09bb7a80; u8 *FUN_088b51b8(void *,int,int);
void FUN_088bbcd4(u8 *owner,void *object,int secondary){int i=0;u8 *selected=FUN_088b51b8(D_09bb7a80,D_08aace80[0x26],1);do{void **slot=(void **)(owner+(secondary?0x38:0x20));if(*slot==object){if(selected&&*(void **)(selected+0x17c)==object)*(void **)(selected+0x17c)=0;*slot=0;}owner+=4;i++;}while(i!=6);}
