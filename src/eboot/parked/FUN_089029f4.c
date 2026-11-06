/* FUN_089029f4: advance enabled subrecords for selected state kinds.
 * Main EBOOT, attempt-high-01 241-512 byte batch 1. State roles are hypotheses. */
typedef unsigned char u8;typedef unsigned int u32;int FUN_08902688(void*,int);
void FUN_089029f4(u32 *state){int complete;u8 flags;if(state[2]!=0)return;if(state[1]==1){FUN_08902688(state+0x2c,1);FUN_08902688(state+0x40,1);}if(state[0]<10&&((1u<<(state[0]&31))&0x20f)!=0){flags=((u8*)state)[0xd];if((flags&1)!=0){complete=FUN_08902688(state+4,0);if(complete==0)flags=((u8*)state)[0xd];else{flags=((u8*)state)[0xd]&0xfe;((u8*)state)[0xd]=flags;}}if((flags&2)!=0&&FUN_08902688(state+0x18,0)!=0)((u8*)state)[0xd]&=0xfd;}}
