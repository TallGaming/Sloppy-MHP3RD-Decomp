/* Purpose: test a nibble mask for a direct or resolved entry index. */
extern void*D_08aace80;extern int FUN_0887fe30(void*,unsigned short);
unsigned int FUN_0887fe80(void*context,short index,unsigned short id,unsigned char mask){unsigned char value;if(index<0)index=FUN_0887fe30(context,id);if(index<0)return 0;value=*((unsigned char*)D_08aace80+0x5f240+index/2);if(index&1)mask&=value<<4;else mask&=value;return mask!=0;}
