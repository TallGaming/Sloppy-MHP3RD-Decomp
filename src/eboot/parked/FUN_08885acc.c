/* Purpose: close and invalidate every active type-57 table entry. */
extern void FUN_08878e64(void*,int);
void FUN_08885acc(void){unsigned char*root=*(unsigned char**)0x09bb7bc4;if(*(int*)0x09bf5250&&*(int*)(root+0x843d30)){int*entry=(int*)(root+0x843130);unsigned int i,count=*(unsigned int*)(root+0x843d30);for(i=0;i<count;i++,entry+=3)if(entry[0]==0x39){FUN_08878e64(root+4,entry[1]);entry[0]=-1;}}*(int*)0x09bf5250=0;}
