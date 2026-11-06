/* Purpose: classify an entry by identifier, using two when absent. */
extern void*D_08aace80;extern unsigned int FUN_0887f328(void*,short);extern void*FUN_0886cae0(void*,unsigned int);extern unsigned int FUN_0887f3d4(void*,void*);
unsigned int FUN_0887f3fc(void*context,unsigned short id){unsigned int index=FUN_0887f328(context,id);if(index==0xffff)return 2;return FUN_0887f3d4(context,FUN_0886cae0(D_08aace80,index));}
