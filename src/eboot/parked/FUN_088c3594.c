/*
 * FUN_088c3594: select a capped mode, update related globals, and store the request.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size mode selection retains three unsymbolized global differences.
 */
extern int D_09bea838; extern void *D_09bb7e70; extern void *D_09bc1ac0; void FUN_088c3574(void *,int); void FUN_088dbc70(void *,int); void FUN_088c3584(void *,int); void FUN_088542f8(int);
void FUN_088c3594(unsigned char *owner,int mode){int selected=mode;D_09bea838=0;if(mode>2){D_09bea838=3;FUN_088c3574(D_09bb7e70,1);FUN_088dbc70(D_09bc1ac0,1);FUN_088c3584(D_09bb7e70,1);selected=1;}FUN_088542f8(selected);*(int *)(owner+0x10)=mode;}
