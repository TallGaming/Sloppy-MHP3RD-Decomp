/* FUN_08922420: match a six-byte signature and dispatch its global record.
 * Main EBOOT, attempt-high-01 241-512 byte batch 11. Record roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;extern u8 *D_08ab4650,*D_08ab4660;void FUN_08943468(void*,int,void*,int);
void FUN_08922420(u8 *state){int mode,count,i,j;u8 *record;if((state[0x1c6]&1)==0)return;mode=1;if((*(u16 *)(state+0x4b4)&0x80)==0){mode=2;if((*(u16 *)(state+0x4b4)&0x20)==0)mode=0;}count=(signed char)D_08ab4650[0x17af];if(count<=0)return;record=D_08ab4650+0x810;for(i=0;i<count;i++,record+=0x14c){for(j=0;j<6;j++)if(state[0xb80+j]!=record[8+j])break;if(j==6){u8 *match=D_08ab4650+i*0x14c+0x818;if(match==0)return;FUN_08943468(D_08ab4660,(signed char)state[0x4ba],match,mode);return;}}}
