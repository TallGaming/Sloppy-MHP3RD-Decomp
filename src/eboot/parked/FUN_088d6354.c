/*
 * FUN_088d6354: derive two normalized phases and publish them together.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two normalized float phases lower much longer than the reference.
 */
extern float D_08968568; void FUN_088d5a70(float,float);
void FUN_088d6354(unsigned char *owner,void *unused,unsigned char *record){unsigned period;float a=0.0f,b=0.0f;period=*(unsigned short *)(record+4);if(period){a=(float)(*(unsigned *)(owner+0x94)%period)/(float)period;if(record[3]&8)a=D_08968568-a;}period=*(unsigned short *)(record+6);if(period){b=(float)(*(unsigned *)(owner+0x94)%period)/(float)period;if(record[3]&8)b=D_08968568-b;}FUN_088d5a70(a,b);}
