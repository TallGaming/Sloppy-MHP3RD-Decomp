/*
 * FUN_088d627c: derive a sinusoidal scalar from record timing and route it to one output.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size scalar sine form cannot reproduce the reference VFPU path.
 */
extern float D_0896855c,D_08968560,D_08968564; float sinf(float); void FUN_088d5a70(float,float);
void FUN_088d627c(unsigned char *owner,void *unused,unsigned char *record){unsigned short *p=*(unsigned short **)(record+4);unsigned phase=0;if(p[0])phase=*(unsigned *)(owner+0x94)%p[0];{float angle=((float)(int)(p[1]*phase)*D_0896855c*D_08968560/D_0896855c)*D_08968564;float base=*(float *)(p+2);float value=base+base*sinf(angle);if((record[3]&0x10)==0)FUN_088d5a70(0.0f,value);else FUN_088d5a70(value,0.0f);}}
