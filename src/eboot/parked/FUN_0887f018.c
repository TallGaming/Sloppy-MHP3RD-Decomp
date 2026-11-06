/* Purpose: test one identifier bit within the global availability set. */
extern void*D_08aace80;
unsigned int FUN_0887f018(void*unused,unsigned int id){(void)unused;id&=0xffff;if(id<0x3d3&&(*(unsigned int*)((unsigned char*)D_08aace80+0x5f9a0+(id>>5)*4)&(1u<<(id&31))))return 1;return 0;}
