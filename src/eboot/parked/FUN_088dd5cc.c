/*
 * FUN_088dd5cc: repeatedly scale a vector and combine it with three matrix rows.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: scalar vector scaling cannot reproduce the reference VFPU sequence.
 */
void FUN_08811efc(float *,float *,float *);
void FUN_088dd5cc(float scale,void *unused,float *out,float *m){int i,j;for(i=0;i<3;i++){for(j=0;j<4;j++)out[j]=(i?out[j]:m[j])*scale;FUN_08811efc(out,out,m+(i+1)*4);}}
