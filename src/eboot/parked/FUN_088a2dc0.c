/* Copy a bounded short string and clear the active-input flags. */
extern void*D_08a33464;extern char*D_09bb7a7c;void FUN_08861ea0(void*,int,int);
void FUN_088a2dc0(char*p){FUN_08861ea0(D_08a33464,1,0);if(*(int*)(p+0x6c)==1){int n=*(int*)(p+100),i=0;short*src=*(short**)(p+0x60),*dst=*(short**)(p+0x68);if(n){*dst=*src;while(*src){src++;dst++;if(n-1==i)break;i++;*dst=*src;}}dst[-1]=0;}D_09bb7a7c[0x1e]=0;p[0x74]=0;}
