/* Seed and initialize 32 fixed-size records from a 27-word template. */
typedef unsigned int u32;void FUN_08865d00(void);u32 FUN_0886598c(int);
int FUN_088999b0(void){u32 local[27],*src=(u32*)0x08967180,*dst=local,*end=(u32*)0x089671c0;int i,j;while(src!=end){for(j=0;j<4;j++)dst[j]=src[j];src+=4;dst+=4;}dst[0]=src[0];dst[1]=src[1];dst[2]=src[2];FUN_08865d00();dst=(u32*)0x09bb6ec0;for(i=0;i<32;i++,dst+=0x13){for(j=0;j<27;j++)dst[j]=local[j];dst[0]=0;dst[4]=FUN_0886598c(i);}return 0;}
