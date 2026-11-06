/* FUN_08917db0: map a sentinel list into two output arrays.
 * Main EBOOT, attempt-high-01 241-512 byte batch 7. Mapping roles are hypotheses. */
typedef unsigned short u16;typedef unsigned int u32;extern u32 *D_08a3387c;u16 *FUN_0891d4c0(void*,int);int FUN_088552b4(int);int FUN_088f20f8(int);
void FUN_08917db0(unsigned char *owner){u16 *entry=FUN_0891d4c0(owner,0);if(entry!=0&&entry[0]!=0xffff){u16 value=entry[0];do{u32 (*map)(void*,int)=(void*)*(u32 *)(D_08a3387c[0]+0x14);entry+=0x18;*(u32 *)(owner+0x60)=map(D_08a3387c,FUN_088552b4(value&0xff));map=(void*)*(u32 *)(D_08a3387c[0]+0x14);*(u32 *)(owner+0x68)=map(D_08a3387c,FUN_088f20f8(value&0xff));value=entry[0];owner+=4;}while(value!=0xffff);}}
