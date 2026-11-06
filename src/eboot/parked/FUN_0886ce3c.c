/* Purpose: find an entry index by its leading short value. */
extern void*D_08aace80;extern short*FUN_0886cae0(void*,unsigned int);
int FUN_0886ce3c(void*object,short value){unsigned int i;unsigned char count=*((unsigned char*)D_08aace80+0x60b84);for(i=0;i<count;i++)if(*FUN_0886cae0(object,i)==value)return(short)i;return 0xff;}
