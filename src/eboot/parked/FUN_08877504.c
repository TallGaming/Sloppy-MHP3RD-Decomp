/* Purpose: blend two transforms and rebuild the output orientation. */
extern void FUN_08877404(float*out,const float*a,const float*b);
void FUN_08877504(float a,float b,float*out,const float*x,const float*y){int i;float p[3],q[3];for(i=0;i<3;i++){p[i]=x[i]*a+y[i]*b;q[i]=x[4+i]*a+y[4+i]*b;}for(i=0;i<16;i++)out[i]=0;out[0]=out[5]=out[10]=out[15]=1;out[12]=x[12]*a+y[12]*b;out[13]=x[13]*a+y[13]*b;out[14]=x[14]*a+y[14]*b;FUN_08877404(out,p,q);}
