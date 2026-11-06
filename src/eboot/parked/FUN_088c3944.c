/*
 * FUN_088c3944: select a channel, optionally reset it, and clear stale slots.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: reset and stale-slot loop control remain longer and differently allocated.
 */
void thunk_FUN_08858774(int); void FUN_088c3680(void *); void FUN_088c3640(void *,int);
void FUN_088c3944(unsigned char *owner,int channel,char reset){int i;thunk_FUN_08858774(channel);if(reset==1){FUN_088c3680(owner);*(int *)(owner+8)=channel;return;}if(channel!=*(int *)(owner+8)){i=4;do{FUN_088c3640(owner,i);i++;}while(i!=0x20);}*(int *)(owner+8)=channel;}
