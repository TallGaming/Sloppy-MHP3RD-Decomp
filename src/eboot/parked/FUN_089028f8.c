/* FUN_089028f8: advance enabled subrecords and clear their completion bits.
 * Main EBOOT, attempt-high-01 241-512 byte batch 1. State roles are hypotheses. */
typedef unsigned char u8;int FUN_08902688(void*,int);
void FUN_089028f8(u8 *state){int complete;u8 flags;if(*(int *)(state+8)==0){if(*(int *)(state+4)==1){FUN_08902688(state+0xb0,1);FUN_08902688(state+0x100,1);}flags=state[0xd];if((flags&1)!=0){complete=FUN_08902688(state+0x10,0);if(complete==0)flags=state[0xd];else{flags=state[0xd]&0xfe;state[0xd]=flags;}}if((flags&2)!=0){complete=FUN_08902688(state+0x60,0);if(complete!=0){state[0xd]=state[0xd]&0xfd;return;}}}return;}
