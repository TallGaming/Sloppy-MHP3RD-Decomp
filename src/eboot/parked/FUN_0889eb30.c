/* Append twelve packed matrix words, then draw every subrecord. */
typedef unsigned int u32;extern u32*D_08a31e88;void FUN_0889d704(void*,int,int,int,int);
void FUN_0889eb30(char*obj,int a,int b,u32*m){u32*out=D_08a31e88;int i,count=*(short*)(*(char**)(obj+4)+0x1c);out[0]=0x3a000000;D_08a31e88=out+13;for(i=0;i<12;i++)out[i+1]=(m[(i/3)*4+(i%3)]>>8)|0x3b000000;for(i=0;i<count;i++)FUN_0889d704(obj,a,b,i,-1);}
