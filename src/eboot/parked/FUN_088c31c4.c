/*
 * FUN_088c31c4: scale, clamp, and optionally suppress a signed adjustment.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: floating scaling and clamp scheduling remain shorter and different.
 */
typedef unsigned char u8; extern float D_08968164; extern float D_08968168;
int FUN_088c31c4(void *unused,u8 *record,char raw,int value){value+=*(short *)(record+0x1e);if(raw==0)value=(int)(((float)record[0xc]/D_08968164)*((float)value/D_08968168)*D_08968168);if(value<0)return 0;if(value>255)value=255;if(*(short *)(record+0x18)<0)value=0;return value;}
