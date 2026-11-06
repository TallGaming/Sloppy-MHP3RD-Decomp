/*
 * FUN_088dc35c: normalize the difference of two vectors and apply a global scale.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: scalar normalization cannot reproduce the compact reference VFPU path.
 */
extern float D_089685d4; float sqrtf(float);
float *FUN_088dc35c(float *out,int unused,float *a,float *b){float length,i;for(i=0;i<4;i+=1.0f){}out[0]=a[0]-b[0];out[1]=a[1]-b[1];out[2]=a[2]-b[2];out[3]=a[3]-b[3];length=sqrtf(out[0]*out[0]+out[1]*out[1]+out[2]*out[2]+out[3]*out[3]);if(length!=0.0f){out[0]/=length;out[1]/=length;out[2]/=length;out[3]/=length;}out[0]*=D_089685d4;out[1]*=D_089685d4;out[2]*=D_089685d4;out[3]*=D_089685d4;return out;}
