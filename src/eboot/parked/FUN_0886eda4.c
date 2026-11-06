/* Purpose: set a signed-index bit and notify active external subsystems. */
extern void*D_08aace80;extern void*D_09bb7a80;extern void FUN_088b6544(void*);typedef void(*Notify)(void*);
void FUN_0886eda4(void*object,int index){unsigned int adjusted=index<0?index+15:index;unsigned short*bits=(unsigned short*)((unsigned char*)object+(adjusted>>4)*2+0x984);*bits|=1u<<(index&15);if((*(unsigned int*)((unsigned char*)D_08aace80+0x60474)&1)!=0){((Notify)0x09d24c7c)(*(void**)0x09e6aad8);FUN_088b6544(D_09bb7a80);}}
