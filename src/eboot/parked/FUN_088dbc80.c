/*
 * FUN_088dbc80: initialize a temporary command context and submit two handles.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size temporary context retains broad stack allocation differences.
 */
typedef unsigned char u8; extern int D_089ed8f8; void FUN_088ec68c(void *); void FUN_088ec6f0(void *,int);
void FUN_088dbc80(int value,int *entries){u8 context[60];int i=0;D_089ed8f8=value;FUN_088ec68c(context);*(int *)(context+52)=D_089ed8f8;*(int *)(context+48)=D_089ed8f8;do{FUN_088ec6f0(context,*entries);entries+=9;i++;}while(i!=2);}
