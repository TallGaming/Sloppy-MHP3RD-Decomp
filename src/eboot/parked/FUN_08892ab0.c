/* Advance an object's state and dispatch its state-table handler. */
typedef unsigned int u32;extern void*D_08aace80;extern char*D_09bb7a58;extern void*D_08966fc0[];void*FUN_0886821c(void*,int);void FUN_0888d444(void*,void*);
int FUN_08892ab0(char*p){u32 state=*(u32*)(p+0xc);if(*(char*)(p+0x148c)&&state&&state!=0x10&&state!=0x11&&!p[0x1451]&&!p[0x1450]){if(!p[0x1458]){FUN_0888d444(p,FUN_0886821c(D_08aace80,0x31));state=0x10;p[0x148c]=0;*(u32*)(p+0xc)=state;}else if(D_09bb7a58[0xd]){state=0;p[0x148c]=0;*(u32*)(p+0xc)=0;}}if(state>0x13)return 0;return ((int(*)(void))D_08966fc0[state])();}
