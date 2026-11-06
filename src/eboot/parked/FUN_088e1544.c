/*
 * FUN_088e1544: dispatch one of two calculations using the current global record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: global-record dispatch remains much shorter and different.
 */
typedef unsigned char u8; extern u8 *D_08a29198; int FUN_088e1474(void *,void *,int,int); int FUN_088e1310(void *,void *,int,int);
int FUN_088e1544(void *owner,int arg,char alternate){int record=*(int *)(D_08a29198+0xdf0);if(!record)return 0;if(alternate==0)return FUN_088e1474(owner,D_08a29198+0xdf8,record+0x20,arg);return FUN_088e1310(owner,D_08a29198+0xdf8,record+0x20,arg);}
