/*
 * FUN_088d27e0: derive a normalized phase and route it to one of two outputs.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: normalized float phase lowers substantially longer and different.
 */
extern float D_089684e8; void FUN_088d251c(float,float);
void FUN_088d27e0(unsigned char *owner,void *unused,unsigned char *record){unsigned period=*(unsigned short *)(record+6);float phase=0.0f;if(period)phase=(float)(*(unsigned *)(owner+0x94)%period)/(float)period;if(record[3]&8)phase=D_089684e8-phase;if((record[3]&0x10)==0)FUN_088d251c(0.0f,phase);else FUN_088d251c(phase,0.0f);}
