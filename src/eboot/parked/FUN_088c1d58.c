/*
 * FUN_088c1d58: run one of two input actions while a network-controlled flag is active.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: merged input-action tail lowers one instruction longer and differently.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_09bc1ed8; void thunk_FUN_08829d04(void); void FUN_08826c4c(void); void FUN_08826c8c(void); void thunk_FUN_08829db4(void);
void FUN_088c1d58(u8 *owner){if((*(u32 *)(D_09bc1ed8+0x10fa354)&1)==0||owner[0x17c]==0)return;thunk_FUN_08829d04();if(owner[0x17d]==0)FUN_08826c4c();else FUN_08826c8c();thunk_FUN_08829db4();}
