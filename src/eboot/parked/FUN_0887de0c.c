/* Purpose: test whether a relationship exists and its controlling bit is enabled. */
extern void*D_08aace80;extern short*FUN_0887dd58(void*,short,short);
unsigned int FUN_0887de0c(void*context,short a,short b){short*r=FUN_0887dd58(context,a,b);unsigned char flag;if(!r)return 0;flag=*((unsigned char*)r+6);return(((*((unsigned char*)D_08aace80+0x50f8+(flag>>3))>>(flag&7))^1)&1)==0?0:1;}
