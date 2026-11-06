/*
 * FUN_088dc444: linearly interpolate a value between two record endpoints.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size interpolation retains four float/global differences.
 */
extern float D_089685e4;
float FUN_088dc444(float value,int unused,unsigned char *record){float start=*(float *)(record+8),end;if(value<=start)return *(float *)(record+0x10);end=*(float *)(record+0xc);if(end<=value)return *(float *)(record+0x14);if(start==end)return (*(float *)(record+0x10)+*(float *)(record+0x14))*D_089685e4;return *(float *)(record+0x10)+((*(float *)(record+0x14)-*(float *)(record+0x10))*(value-start))/(end-start);}
