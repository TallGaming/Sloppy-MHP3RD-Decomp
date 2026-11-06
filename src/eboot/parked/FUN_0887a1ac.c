/* Purpose: select one of two network modes and reset both handle tables. */
extern void FUN_088ebb10(void*,int,unsigned int);
unsigned int FUN_0887a1ac(int mode){unsigned int*state=(unsigned int*)0x08aad03c;*state=mode==0?1:2;FUN_088ebb10((void*)0x08aad040,0xff,0x240);FUN_088ebb10((void*)0x08aacebc,0xff,0x180);return*state;}
