/*
 * FUN_088a5578: clear all slots, then restore the first twenty-four saved pairs.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: closest matching-size two-loop form retains two differences.
 */
typedef unsigned char u8; typedef unsigned short u16;
extern u8 *D_08aace80; u16 *FUN_0886cae0(void *,int);
void FUN_088a5578(void){ int i; u16 *saved=(u16 *)(D_08aace80+0x5014);
 for(i=0;i<32;i++){ u16 *p=FUN_0886cae0(D_08aace80,i); p[0]=0; p=FUN_0886cae0(D_08aace80,i); p[1]=0; }
 for(i=0;i<24;i++){ u16 *p=FUN_0886cae0(D_08aace80,i); p[0]=saved[i*2]; p=FUN_0886cae0(D_08aace80,i); p[1]=saved[i*2+1]; } }
