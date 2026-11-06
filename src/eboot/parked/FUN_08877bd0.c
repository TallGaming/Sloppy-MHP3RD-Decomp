/* Purpose: build a transform matrix using the alternate rotation helpers. */
extern void FUN_08877b10(unsigned int,void*,void*);extern void FUN_08877ab0(unsigned int,void*,void*);extern void FUN_08877b70(unsigned int,void*,void*);
void FUN_08877bd0(unsigned int*out){unsigned int r[3]={0};int i;for(i=0;i<16;i++)out[i]=0;out[0]=out[5]=out[10]=out[15]=0x3f800000;FUN_08877b10(r[1],out,out);FUN_08877ab0(r[0],out,out);FUN_08877b70(r[2],out,out);}
