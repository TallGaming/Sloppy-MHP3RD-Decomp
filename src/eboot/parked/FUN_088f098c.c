/* FUN_088f098c: activate the first pending type-one controller record. PARKED: exact length retains five differences. */
typedef unsigned int u32;void FUN_088f0788(void*,u32);void FUN_088efc4c(void*,u32);
void FUN_088f098c(char*p){u32 i=0;char*r=p+0x43e;while(r[0]!=1||r[8]!=0){i++;r+=10;if(i==2)return;}FUN_088f0788(p,i&255);FUN_088efc4c(p,i&255);}
