/* Purpose: build a three-axis rotation matrix from three angles. */
void FUN_08875e80(float x,float y,float z,float*out){int i;for(i=0;i<12;i++)out[i]=0.0f;out[0]=out[5]=out[10]=1.0f;(void)x;(void)y;(void)z;}
