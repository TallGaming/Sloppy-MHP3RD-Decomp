/* Purpose: decode a sixteen-byte constant into the global key buffer. */
unsigned char*FUN_0886e130(void){unsigned char*out=(unsigned char*)0x08aace84,*in=(unsigned char*)0x08966668;int i;for(i=0;i<16;i++)out[i]=in[i]^0xc3;return out;}
