/*
 * FUN_088d0690: choose an index from cumulative byte weights using a random percentile.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size weighted selection retains different loop allocation.
 */
typedef unsigned char u8; extern void *D_09bc1ed8; unsigned FUN_088e62f0(void *,int);
int FUN_088d0690(void *unused,u8 *weights,int count){unsigned random=FUN_088e62f0(D_09bc1ed8,1);int total=0,i=0;if(count>0){do{if(weights[i]&&(total+=weights[i],(int)(random%100)<total))return i;i++;}while(i!=count);}return -1;}
