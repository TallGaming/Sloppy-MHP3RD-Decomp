/* Combine the high-byte alpha channels of two packed colors. */
typedef unsigned int u32;
u32 FUN_088fab08(int unused,u32 a,u32 b){float scale=255.0f;float alpha=((float)(a>>24)/scale)*((float)(b>>24)/scale)*scale;if(alpha<256.0f)return ((u32)alpha<<24)|(a&0xffffff);return ((u32)(alpha-256.0f)<<24)|(a&0xffffff);}
