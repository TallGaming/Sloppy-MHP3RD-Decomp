/* Purpose: find a category byte in six active records. */
extern unsigned int FUN_0886cb18(void*,signed char);unsigned int FUN_088700f0(void*o,signed char v){int i,j;unsigned char*r=o;void*g=*(void**)0x09bc1ed8;if((*(unsigned int*)((unsigned char*)g+0x10fa354)&1)==0)return FUN_0886cb18(o,v);for(i=0;i<6;i++,r+=0xfc)if(r[0x30])for(j=0;j<5;j++)if(r[0xb1+j]==(unsigned char)v)return 1;return 0;}
