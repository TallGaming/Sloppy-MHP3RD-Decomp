/* Release every type-one resource slot and clear its request state. */
typedef unsigned int u32;extern char*D_09bb7bc4;extern void*D_09beb090;void FUN_08878e64(void*,void*);void FUN_088ef994(void*,int);
void FUN_088a23e4(char*p){char*base=D_09bb7bc4;int*slot=(int*)(base+0x843130);u32 i=0,count=*(u32*)(base+0x843d30);while(i<count){i++;if(slot[0]==1){FUN_08878e64(base+4,(void*)slot[1]);slot[0]=-1;}slot+=3;}*(u32*)(p+0x268)=0;*(u32*)(p+0x260)=0;*(u32*)(p+0x264)=0;FUN_088ef994(D_09beb090,4);*(u32*)(p+0x270)=0;*(u32*)(p+0x274)=0;*(u32*)(p+0x26c)=0;}
