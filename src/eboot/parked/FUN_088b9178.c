/*
 * FUN_088b9178: refresh each occupied one of six primary slots by index.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains two initialization-order differences.
 */
typedef unsigned char u8; void FUN_088b9060(void *,int);
void FUN_088b9178(u8 *owner){u8 *it=owner;int i=0;do{void *p=*(void **)(it+8);it+=4;if(p)FUN_088b9060(owner,i);i++;}while(i!=6);}
