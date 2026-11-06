/* Release one indexed region. PARKED: initial plain-C attempt. */
void FUN_088f2694(char*p,int n){short*d=(short*)(p+n*12);if(n>=2){int*s=(int*)(p+n*4+0x38);*(int*)(p+0x3c)+=*s;*(int*)(p+0x38)-=*s;*s=0;}d[1]=-1;*(int*)(d+4)=0;d[0]=0;*(int*)(d+2)=0;}
