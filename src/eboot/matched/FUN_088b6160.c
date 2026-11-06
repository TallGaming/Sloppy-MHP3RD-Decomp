/*
 * FUN_088b6160: mark the selected primary object after a context lookup succeeds.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_08aace80; extern void *D_08a29198; u8 *FUN_088b51b8(void *,u8,int); int FUN_0882a910(void *,void *);
void FUN_088b6160(void *owner){u8 *p=FUN_088b51b8(owner,D_08aace80[0x26],1);if(p&&FUN_0882a910(D_08a29198,p))*(u32 *)(p+4)|=4;}
