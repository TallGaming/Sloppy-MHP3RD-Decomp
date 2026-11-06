/* Multiply the high-byte alpha channels of two packed colors. */
typedef unsigned int u32; typedef unsigned char u8;
u32 FUN_088fb754(int unused,u32*color,char*factor){u32 c=*color;float scale=255.0f;float a=((float)(c>>24)/scale)*((float)*(u8*)(factor+3)/scale)*scale;if(a>=256.0f)a-=256.0f;return ((u32)a<<24)|(c&0xffffff);}
