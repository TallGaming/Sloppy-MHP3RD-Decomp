/* Purpose: reset connection state and optionally copy its nine-byte name. */
extern void FUN_088ebb10(void*,int,unsigned int);extern void FUN_088ebb18(void*,const void*,unsigned int);
void FUN_0887bf2c(signed char mode,const void*name){FUN_088ebb10((void*)0x08aad2ec,0,0x18);*(unsigned int*)0x08aad2f8=0xffffffff;*(signed char*)0x08aad2f0=mode;if(mode==1)FUN_088ebb18((void*)0x08aad290,name,9);*(unsigned int*)0x08aad2ec=0;}
