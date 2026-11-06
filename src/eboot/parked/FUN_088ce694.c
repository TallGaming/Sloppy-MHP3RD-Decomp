/*
 * FUN_088ce694: find a matching typed record in a fixed-stride owner list.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: signed-byte record iteration remains substantially longer and different.
 */
typedef unsigned char u8; u8 *FUN_088ce51c(void *,u8); int FUN_088ce678(void *,u8);
u8 *FUN_088ce694(void *owner,u8 key,char type){u8 *base=FUN_088ce51c(owner,key);int count=FUN_088ce678(owner,key),i=0;if(count<1)return 0;if((char)base[0x1e]==type)return base;do{i=(char)(i+1);if(count==i)return 0;}while((char)base[i*0x20+0x1e]!=type);return base+i*0x20;}
