/* FUN_089273c8: remove two pending values and close their active context.
 * Main EBOOT, attempt-high-01 241-512 byte batch 12. Pending-value roles are hypotheses. */
typedef unsigned char u8;typedef unsigned int u32;extern u8 *D_08aace80;extern void *D_09bb7a80;int FUN_088b51b8(void*,u8,int);void FUN_088acd90(int,short,int,int);void FUN_088a604c(int);
void FUN_089273c8(u8 *state){int context,i;if(state[0x577]==0)return;context=FUN_088b51b8(D_09bb7a80,D_08aace80[0x26],0);for(i=0;i<2;i++){short value=*(short *)(state+0x63e + i*2);if(value!=-1)FUN_088acd90(context,value,1,0);}if((*(u32 *)(D_08aace80+0x60474)&1)!=0)FUN_088a604c(context);state[0x577]=0;}
