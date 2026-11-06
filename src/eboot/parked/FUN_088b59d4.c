/*
 * FUN_088b59d4: update a display entry from a populated fixed-size record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: fixed-record arithmetic and global loads lower to a shorter frame.
 */
typedef unsigned char u8; typedef unsigned short u16; extern void *D_08a31e84; extern u8 *D_08aace80; extern u16 D_089e28f4[]; extern void *D_08a3345c;
unsigned FUN_0885bbfc(void *,u8); void FUN_088559ac(void *,int,u16,int,int);
void FUN_088b59d4(void *unused,int index){u8 *p=D_08aace80+index*0xfc+0x30;unsigned n;if(!p[0])return;n=FUN_0885bbfc(D_08a3345c,p[0x76]);FUN_088559ac(D_08a31e84,index+2,D_089e28f4[n&0xff],0,0);}
