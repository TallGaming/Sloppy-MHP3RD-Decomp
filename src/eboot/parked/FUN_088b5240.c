/*
 * FUN_088b5240: visit valid unblocked objects in a six-entry array.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: valid-object iteration and helper-call scheduling differ.
 */
typedef unsigned char u8; typedef unsigned int u32; extern void *D_08a31e8c; int FUN_088b5098(void *,void *); void FUN_08857710(void *,int,void *,int);
void FUN_088b5240(u8 *o,u8 value){int i;for(i=0;i<6;i++){u8 *p=*(u8 **)(o+0x38+i*4);if(FUN_088b5098(o,p)&&(*(u32 *)(p+4)&4)==0)FUN_08857710(D_08a31e8c,6,p,value);}}
