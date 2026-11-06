/*
 * FUN_088db864: lazily allocate one indexed 0x4400-byte owner block.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: lazy allocation remains one instruction short and differently allocated.
 */
int FUN_088ec964(int,int,void *,int);
void FUN_088db864(unsigned char *owner,int index){int *slot=(int *)(owner+index*0x24);int result;if(*slot==0){result=FUN_088ec964(index,index+1,owner+index*0x4400+0x1c0,0x4400);*slot=result;}}
