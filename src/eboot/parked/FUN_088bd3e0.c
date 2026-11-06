/*
 * FUN_088bd3e0: resolve an indexed byte-table entry when the selected record is valid.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: unsymbolized table bases and chained offsets lower differently.
 */
typedef unsigned char u8; extern int D_08a33e94; extern u8 D_08a33e70[]; int FUN_088f52fc(void *,u8);
u8 *FUN_088bd3e0(u8 *owner,unsigned index,u8 key){int slot=FUN_088f52fc(owner+0x1820,key);int off=*(int *)(D_08a33e70+D_08a33e94+slot*4);if(*(int *)(D_08a33e70+off+4)!=0x9999)return D_08a33e70+*(int *)(D_08a33e70+off+0xc+(index&0xff)*16);return 0;}
