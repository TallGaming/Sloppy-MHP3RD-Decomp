/* Advance a signed-short ramp and compute its scaled output. */
typedef short s16;
void FUN_0889a7f0(s16*p){int step=*(int*)(p+4);s16 current,limit;if(!step){p[0]=(s16)(((int)p[1]*(int)p[3])/0xfff);return;}*(int*)(p+2)+=step;if(step<0){limit=p[6];current=p[3];if(p[3]<=limit){p[3]=limit;p[2]=0;*(int*)(p+4)=0;current=limit;}}else{limit=p[6];current=p[3];if(limit<=p[3]){p[3]=limit;p[2]=0;*(int*)(p+4)=0;current=limit;}}p[0]=(s16)(((int)p[1]*(int)current)/0xfff);}
