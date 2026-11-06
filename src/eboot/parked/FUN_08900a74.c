/* FUN_08900a74: submit a fixed drawing command for each 36-byte record.
 * Main EBOOT, attempt-high-01 241-512 byte batch 1. Command role is a hypothesis. */
void FUN_088ff8f0(int,int,int,int,int,int,int,int,int,int);
void FUN_08900a74(int a,int record,int c,int count,int e,signed char f,int g,int h,short i,short j){int n;if(count<1)return;n=0;do{n++;FUN_088ff8f0(a,record,c,h,i,j,0,e,f,g);record+=0x24;}while(count!=n);}
