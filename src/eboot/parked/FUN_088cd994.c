/*
 * FUN_088cd994: send a two-byte packet while the network flag is enabled.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: packet and network-global setup remain one instruction longer and different.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_09bc1ed8; extern void *D_09bb7bc0; void FUN_088c1f54(void *,int,void *);
void FUN_088cd994(void *unused,u8 a,u8 b){u8 packet[2];if((*(u32 *)(D_09bc1ed8+0x10fa354)&1)==0)return;packet[0]=a;packet[1]=b;FUN_088c1f54(D_09bb7bc0,8,packet);}
