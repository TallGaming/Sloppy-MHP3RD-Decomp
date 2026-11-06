/* FUN_088f260c: initialize the memory-region manager and its free-space fields. PARKED: exact length retains fourteen differences. */
typedef unsigned char u8;void FUN_088f2554(void);void FUN_08960cb8(int,void*,void*);
void FUN_088f260c(u8*p){int*i,j;FUN_088f2554();FUN_08960cb8(0,p+0x30,p+0x34);*(int*)(p+0x38)=*(int*)(p+0x30)+0x300000;*(int*)(p+0x3c)=0x100000;i=(int*)(p+0x40);j=0;do{j++;*i++=0;}while(j!=2);p[0x4a]=1;p[0x48]=0;p[0x49]=0;}
