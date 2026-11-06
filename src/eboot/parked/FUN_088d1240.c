/*
 * FUN_088d1240: decide whether a variable record should be processed.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: compound signed-byte predicate remains one instruction short and different.
 */
int FUN_088d1240(void *unused,unsigned char *record,char *type){char value=*type;if(*(int *)(record+0x4c)==-1||value==0||value==-3||value==-2||value==-1)return 0;if((value==8||value==14||value==19)&&(type[3]&0x40))return 0;return 1;}
