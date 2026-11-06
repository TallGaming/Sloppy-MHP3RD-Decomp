/* Release selected resource rows while preserving the skipped row classes. */
typedef unsigned int u32;void FUN_08878e64(void*);void FUN_0889c050(void*);void FUN_08878f78(void*);void FUN_0889c088(void*);
void FUN_088a1bec(void*owner,char*base){u32 i=0;char*a=base+0xdf0,*b=base+0xf70,*c;do{while(i>1&&i!=3&&i!=4){i++;a+=0x30;b+=0x80;if(i==7)return;}if(*(void**)(a+0xc))FUN_08878e64(owner);FUN_0889c050(a);if(*(void**)(b+0x58))FUN_08878e64(owner);FUN_08878f78(b);c=base+i*0x10+0x12f0;if(*(void**)(c+4))FUN_08878e64(owner);i++;FUN_0889c088(c);a+=0x30;b+=0x80;}while(i!=7);}
