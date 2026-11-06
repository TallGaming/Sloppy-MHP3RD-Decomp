/* Purpose: copy one of two global records into a tagged output buffer. */
extern void*D_08aace80;extern int FUN_0886d8a0(void*,int);extern unsigned char FUN_0886d8f0(void*,int);extern void FUN_088ebb18(void*,const void*,unsigned int);
void FUN_0887f660(unsigned char*out,int kind){int source;if(kind==0){source=FUN_0886d8a0(D_08aace80,1);out[0]=FUN_0886d8f0(D_08aace80,1);}else if(kind==1){source=FUN_0886d8a0(D_08aace80,2);out[0]=FUN_0886d8f0(D_08aace80,2);}else return;if(source)FUN_088ebb18(out+1,(void*)source,0x75);}
