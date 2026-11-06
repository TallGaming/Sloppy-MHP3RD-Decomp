/*
 * FUN_088dc2c4: inspect sixteen tagged entries and clear or reset owner state.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: tagged-entry scan remains longer and differently allocated.
 */
typedef unsigned char u8; extern u8 *D_08a29198; void FUN_088dc294();
void FUN_088dc2c4(u8 *owner,u8 *object,char mode){char *p;int i;if(D_08a29198[0xdeb]==0)return;if(object&&(p=*(char **)(object+0x1c))){i=0x10;do{i--;if(*p==(char)D_08a29198[0xdf4]){if(mode==0){if((u8)p[1]>1){FUN_088dc294();return;}}else{if(owner==(u8 *)-0xa0)return;owner[0x106]=0;}owner[0x9c]=0;return;}p+=2;}while(i!=0);}FUN_088dc294(owner,0xf);}
