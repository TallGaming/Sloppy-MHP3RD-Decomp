/* Purpose: enter state four, stop the action, and clear the local flag. */
extern void *D_09bb7e78;extern int FUN_088be55c(void*);extern void FUN_088c7330(void*,int);extern void FUN_088c8440(void*,int,int);extern void FUN_0886c7f0(void*,int);
#define F(b,t,o)(*(t*)((unsigned char*)(b)+(o)))
void FUN_0886c7fc(void*object){F(object,unsigned char,0x6047a)=4;if(FUN_088be55c(*(void**)0x09bb7b60)==0){FUN_088c7330(D_09bb7e78,0);FUN_088c8440(D_09bb7e78,4,0);}FUN_0886c7f0(object,0);}
