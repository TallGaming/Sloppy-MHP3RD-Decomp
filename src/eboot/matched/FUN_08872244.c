/* Purpose: clear identifier 0x54 when its controlling state allows it. */
extern int FUN_0886624c(void*,unsigned short);extern void FUN_0886eda4(void*,int);void FUN_08872244(void*o){if((*(unsigned int*)((unsigned char*)o+0x5fbf8)&8)==0||FUN_0886624c(o,0x54)!=0)return;FUN_0886eda4(o,0x54);*((unsigned char*)o+0x5149)=0;}
