/*
 * FUN_088c3b48: start one available channel entry and mark it active on success.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: cached slot arithmetic shortens and reallocates the channel-start path.
 */
int thunk_FUN_08858940(int,int,int);
int FUN_088c3b48(unsigned char *owner,int index,int a,int b){unsigned char *slot=owner+0x10+index*0x14;int result;if(*(int *)(slot+8)==0||*(short *)(slot+0x14)!=-1)return -1;result=thunk_FUN_08858940(*(int *)(slot+8),a,b);if(result>0)*(unsigned short *)(slot+0x1a)|=1;return result;}
