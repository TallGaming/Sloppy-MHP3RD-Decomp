/*
 * FUN_088cf310: clear an output or initialize it from an indexed global record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size global record copy retains broad table/stack differences.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 D_09c3e49c[]; extern u32 D_089683b4; void FUN_08811efc(void *,int,void *);
void FUN_088cf310(u8 *owner,u32 *out,int context,unsigned index){u32 local[4],*source;if(owner[0x9a30]==0xff){out[3]=0;out[0]=0;out[1]=0;out[2]=0;return;}source=(u32 *)(*(u32 *)(D_09c3e49c+owner[0x9a30]*0x14)+(index&0xff)*0x18);local[0]=source[0];local[1]=0;local[2]=source[1];local[3]=D_089683b4;FUN_08811efc(out,context,local);}
