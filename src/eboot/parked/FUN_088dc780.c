/*
 * FUN_088dc780: evaluate a two-sided float curve and decrement its lifetime.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two-sided float curve remains longer and differently scheduled.
 */
extern float D_089685f0,D_089685f4,D_089685f8,D_089685fc; float FUN_088121dc(float,float);
float FUN_088dc780(unsigned char *owner){float result=D_089685f8,base=D_089685f0,phase=(float)(int)*(short *)(owner+0x94)**(float *)(owner+0x22c);short life;if(phase<D_089685f0)result=FUN_088121dc(phase+phase,D_089685f4)*base;else{float x=FUN_088121dc((D_089685f8-phase)+(D_089685f8-phase),D_089685f4);result=x*D_089685fc+result;}life=*(short *)(owner+0x94)-1;*(short *)(owner+0x94)=life;if(life==0)owner[0x9c]=0;return result;}
