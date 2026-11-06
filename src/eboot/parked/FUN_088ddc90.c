/*
 * FUN_088ddc90: find an owner handle in a twenty-entry global list or mark failure.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: twenty-entry global search remains two instructions short and different.
 */
extern unsigned char *D_09da9600;
int FUN_088ddc90(unsigned char *owner){int value=*(int *)(owner+0xf0),i=0;int *p;if(value){p=(int *)(D_09da9600+0x250);do{if(i<0x14&&value==*p)return value+0x10;i++;p++;}while(i!=0x14);}owner[0x139]=1;return 0;}
