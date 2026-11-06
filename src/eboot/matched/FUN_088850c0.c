/* Purpose: reset a large object and its three embedded records. */
extern void FUN_08885048(void*);extern void FUN_08885088(void*);
#define F(b,t,o)(*(t*)((unsigned char*)(b)+(o)))
void FUN_088850c0(void*object){F(object,unsigned char,0x1e15)=0xff;F(object,unsigned int,0x1bb8)=0;F(object,unsigned char,0x2558)=0;F(object,unsigned char,0x1bcd)=0;F(object,unsigned char,0x1bce)=0;F(object,unsigned char,0x24ec)=0;F(object,unsigned int,0x1bbc)=0;F(object,unsigned char,0x1e14)=0;F(object,unsigned char,0x1e16)=0;FUN_08885048((unsigned char*)object+0x24f0);FUN_08885088((unsigned char*)object+0x2518);FUN_08885088((unsigned char*)object+0x2538);}
