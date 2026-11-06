/* FUN_089048a8: resolve a resource, build a local transform, and submit it.
 * Main EBOOT, attempt-high-01 241-512 byte batch 2. Resource role is a hypothesis. */
typedef unsigned int u32;extern void *D_08aace80;int FUN_08867d40(void*,unsigned int);void FUN_0880e1d4(void*,int,int);void FUN_08904570(int,int,void*,int,int,int,int,int,int);
void FUN_089048a8(int a,int b,int value,int resource,int e,int f,short g,short h,int i){u32 local[4];int handle;if(resource==0)handle=FUN_08867d40(D_08aace80,0x1b);else handle=FUN_08867d40(D_08aace80,(resource+0x1b)&0xffff);FUN_0880e1d4(local,handle,value);FUN_08904570(a,b,local,e,f,g,h,i,0);}
