/* Release every type-two resource slot and clear its request state. */
typedef unsigned int u32;extern char*D_09bb7bc4;extern void*D_09beb090;void FUN_08878e64(void*,void*);void FUN_088ef994(void*,int);
void FUN_088a24ec(char*p){char*base=D_09bb7bc4;int*slot=(int*)(base+0x843130);u32 i=0,count=*(u32*)(base+0x843d30);while(i<count){i++;if(slot[0]==2){FUN_08878e64(base+4,(void*)slot[1]);slot[0]=-1;}slot+=3;}*(u32*)(p+0x280)=0;*(u32*)(p+0x278)=0;*(u32*)(p+0x27c)=0;FUN_088ef994(D_09beb090,5);*(u32*)(p+0x288)=0;*(u32*)(p+0x28c)=0;*(u32*)(p+0x284)=0;}
