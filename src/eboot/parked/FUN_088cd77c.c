/* Select a two-byte table entry and forward its pair. */
typedef unsigned int u32;void FUN_088cd750(void*,unsigned char,unsigned char);
void FUN_088cd77c(void*ctx,u32 index){unsigned char*p=(unsigned char*)0x089e89f0+(index&255)*2;FUN_088cd750(ctx,p[0],p[1]);}
