/*
 * FUN_088d2154: advance and wrap two byte counters when a frame threshold is reached.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size byte-counter update retains broad allocation differences.
 */
typedef unsigned char u8; typedef unsigned short u16;
void FUN_088d2154(u8 *owner,u8 *state,u8 step,u16 threshold){unsigned value,limit,current;if((u16)(threshold&0xff)<=(u16)(*(short *)(owner+0x90)-*(short *)(state+6))){*(short *)(state+6)=*(short *)(owner+0x90);state[5]+=(threshold&0xff)==0?2:1;if(step<=state[5])state[5]-=step;limit=state[4];if(limit){current=state[5];if(current<state[3])current+=step;if(limit<=current-state[3]){value=current-limit;state[5]=value;if(step<=(value&0xff))state[5]-=step;}}}}
