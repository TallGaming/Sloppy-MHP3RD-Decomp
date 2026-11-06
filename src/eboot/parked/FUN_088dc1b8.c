/*
 * FUN_088dc1b8: evaluate a wrapped quartic envelope and return a signed short value.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: wrapped quartic float lowering remains longer and different.
 */
extern float D_089685c8,D_089685cc;
int FUN_088dc1b8(float start,float end,float scale,int unused,unsigned phase){float p=(float)phase,a,b;if(p<=start)return 0;if(end<=p){if(p<=D_089685c8-end||D_089685c8-start<=p)return 0;scale=-scale;phase=0x10000-phase;}b=end-(float)(int)phase;a=(float)(int)phase-start;return (short)(int)(scale*a*a*D_089685cc*b*b*D_089685cc);}
