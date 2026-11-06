/* Purpose: activate the ready state and notify the related subsystems. */
extern void *D_08aace80;extern void *D_09bb7e78;extern int FUN_0886c880(void);extern void FUN_0886c7f0(void*,int);extern void FUN_088c7330(void*,int);extern void FUN_088c86a0(void*,int,int);
#define F(b,t,o)(*(t*)((unsigned char*)(b)+(o)))
void FUN_0886c88c(void*object){if(FUN_0886c880()==0)return;F(object,unsigned char,0x6047c)=1;FUN_0886c7f0(D_08aace80,1);FUN_088c7330(D_09bb7e78,1);FUN_088c86a0(D_09bb7e78,4,0);}
