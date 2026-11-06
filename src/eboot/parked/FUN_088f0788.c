/* FUN_088f0788: activate an indexed two-entry controller record. PARKED: branch/global lowering remains longer and different. */
typedef unsigned char u8;typedef unsigned int u32;void FUN_088efa28(void*,int,int);void FUN_088bf934(void*);
void FUN_088f0788(u8*p,u32 n){char*r=(char*)(p + 0x43e + (n&255)*10);if(r[8])return;if(r[0]==1)FUN_088efa28(p,r[1],0);else FUN_088efa28(p,r[1],1);r[8]=1;FUN_088bf934(*(void**)0x09bb7b60);}
