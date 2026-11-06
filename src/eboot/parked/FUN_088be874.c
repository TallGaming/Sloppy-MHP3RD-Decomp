/*
 * FUN_088be874: raise one of two owner maxima and publish the changed value.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: merged slot selection is much shorter than branch-specific reference setup.
 */
void FUN_088f44fc(void *,int,int); void FUN_088bd7e4(void *,int);
void FUN_088be874(unsigned char *owner,int value,char alternate){int *slot;if(alternate==0)slot=(int *)(owner+0x21d4);else slot=(int *)(owner+0x21d8);if(*slot==-1||*slot<value){*slot=value;FUN_088f44fc(owner+0x21c4,value,alternate!=0);FUN_088bd7e4(owner,alternate!=0);}}
