/* Purpose: enter state one and start the associated subsystem action. */
extern void *D_09bb7e78;extern int FUN_088be55c(void*);extern void FUN_088c7330(void*,int);extern void FUN_088c86a0(void*,int,int);
#define F(b,t,o)(*(t*)((unsigned char*)(b)+(o)))
void FUN_0886c774(void *object){F(object,unsigned char,0x6047a)=1;if(FUN_088be55c(*(void**)0x09bb7b60)==0){FUN_088c7330(D_09bb7e78,1);FUN_088c86a0(D_09bb7e78,4,0);}}
