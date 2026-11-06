/* Purpose: update an active record and restart its dependent object on change. */
extern void FUN_08880de0(unsigned int handle,int value,int one);
#define F(b,t,o)(*(t*)((unsigned char*)(b)+(o)))
void FUN_0887956c(void*object,int value){if(F(object,signed char,0x74)==0)return;if(value==0){F(object,unsigned short,0x7a)=0;F(object,unsigned char,0x74)=0;F(object,unsigned short,0x76)=0;F(object,unsigned short,0x78)=0;return;}if(F(object,short,0x78)!=F(object,short,0x7a)){F(object,short,0x78)=F(object,short,0x7a);if(F(object,int,0x28)==1){int i;for(i=0;i<7;i++)F(object,unsigned int,0x28+i*4)=0;}FUN_08880de0(F(object,unsigned int,0x58),value,1);}}
