/* FUN_088f1a2c: toggle a state byte around a virtual update call. PARKED: virtual-call lowering remains shorter and different. */
typedef unsigned char u8;typedef int(*Method)(void*);
int FUN_088f1a2c(u8*p){int r;if(p[0x448]==0){p[0x448]=1;r=((Method)(*(void***)(p))[0x2a])(p);}else{p[0x448]=0;r=((Method)(*(void***)(p))[0x2a])(p);}if(p[0x448]==0)p[0x448]=1;else p[0x448]=0;return r;}
