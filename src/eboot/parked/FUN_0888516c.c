/* Purpose: clear an output record and copy its first two source words. */
extern void FUN_088ebb10(void*,int,unsigned int);extern unsigned int*FUN_08885024(void*);
void FUN_0888516c(void*context,unsigned int*out){unsigned int*source;FUN_088ebb10(out,0,0x20);source=FUN_08885024(context);out[0]=source[0];out[1]=source[1];}
