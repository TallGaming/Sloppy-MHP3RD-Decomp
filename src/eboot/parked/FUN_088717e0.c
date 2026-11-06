/* Purpose: compare normalized input and record-space direction vectors. */
float FUN_088717e0(void*unused,const float*a,const float*b){float la=a[0]*a[0]+a[1]*a[1]+a[2]*a[2];float lb=b[0]*b[0]+b[1]*b[1]+b[2]*b[2];(void)unused;if(la==0||lb==0)return 0;return(a[0]*b[0]+a[1]*b[1]+a[2]*b[2]);}
