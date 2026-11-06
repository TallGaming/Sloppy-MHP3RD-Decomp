/* Release four parallel resource records and reset their handles. */
void FUN_08878e64(void*,void*);void FUN_0889c050(void*);void FUN_08878f78(void*);void FUN_0889c088(void*);
void FUN_088a1d30(void*owner,char*base){int i=0;char*c=base+0x12f0,*b=base+0xf70,*a=base+0xdf0;do{i++;if(*(void**)(a+0xc)){FUN_08878e64(owner,*(void**)(a+0xc));*(void**)(a+0xc)=0;}FUN_0889c050(a);a+=0x30;if(*(void**)(b+0x58)){FUN_08878e64(owner,*(void**)(b+0x58));*(void**)(b+0x58)=0;}FUN_08878f78(b);b+=0x80;if(*(void**)(c+4)){FUN_08878e64(owner,*(void**)(c+4));*(void**)(c+4)=0;}FUN_0889c088(c);c+=0x10;}while(i!=4);}
