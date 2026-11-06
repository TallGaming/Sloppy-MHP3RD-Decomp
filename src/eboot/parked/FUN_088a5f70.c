/*
 * FUN_088a5f70: transform a table vector and add it to an output position.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: table vector and scalar transform frame use different register scheduling.
 */
typedef unsigned char u8; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern u8 D_089e28a0; void FUN_088779e4(void *,void *); void FUN_088759ec(void *,void *,void *);
void FUN_088a5f70(void *unused,float *out,u32 a,u32 index){ u32 zero[4]={0,a&0xffff,0,0}; u32 matrix[16]; float v[4]; u8 *p=&D_089e28a0+(index&0xffff)*8;
 FUN_088779e4(matrix,zero); v[0]=FIELD(p,float,0); v[1]=FIELD(p,float,4); v[2]=0; v[3]=0; FUN_088759ec(v,v,matrix); out[0]+=v[0]; out[2]+=v[2]; out[1]+=v[1]; }
