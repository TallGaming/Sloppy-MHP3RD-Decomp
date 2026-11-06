/* Dequeue one RPC record under a critical-section token. */
extern int D_09bb5c48,D_09bb5c4c,D_09bb5c50;extern char*D_09bb5c54;int FUN_08960bb0(void);void FUN_08960b88(int);void FUN_0880c088(void*,const void*,int);
int FUN_088994ac(int error,void*out){int token=FUN_08960bb0(),result=-0x7fffffe6;if(!error&&(result=-0x7fffffe4,D_09bb5c4c!=0)){FUN_0880c088(out,D_09bb5c54+D_09bb5c48*0x40,0x40);D_09bb5c48=(D_09bb5c48+1)%D_09bb5c50;result=--D_09bb5c4c;FUN_08960b88(token);return result;}FUN_08960b88(token);return result;}
