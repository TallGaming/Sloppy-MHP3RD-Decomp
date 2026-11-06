/*
 * FUN_088dd488: query a vector and retry after raising its second component.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: retry-vector stack layout remains longer and differently allocated.
 */
extern void *D_09c47be0; extern float D_0896861c; void func_0x09c19458(void *,void *,float *,int);
float FUN_088dd488(void *unused,float *v,unsigned char *record){float out[4],copy[4];func_0x09c19458(D_09c47be0,v,out,0);if(out[0]<*(float *)(record+0x84)){copy[0]=v[0];copy[1]=v[1]+D_0896861c;copy[2]=v[2];copy[3]=v[3];func_0x09c19458(D_09c47be0,copy,out,0);}return out[0];}
