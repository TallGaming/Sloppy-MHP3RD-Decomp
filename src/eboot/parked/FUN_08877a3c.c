/* Purpose: build a transform matrix from converted rotation components. */
extern void FUN_088761d0(unsigned int*out,const unsigned int*in);extern void FUN_08875cc8(unsigned int,void*,void*);extern void FUN_08875c70(unsigned int,void*,void*);extern void FUN_08875d20(unsigned int,void*,void*);
void FUN_08877a3c(unsigned int*out){unsigned int r[3]={0};int i;for(i=0;i<16;i++)out[i]=0;out[0]=out[5]=out[10]=out[15]=0x3f800000;FUN_08875cc8(r[1],out,out);FUN_08875c70(r[0],out,out);FUN_08875d20(r[2],out,out);}
