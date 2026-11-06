/*
 * FUN_088c3138: initialize a controller object and its nineteen fixed-size entries.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size duplicate constructor retains two vtable relocation differences.
 */
typedef unsigned int u32; extern void *PTR_FUN_0896b120; void FUN_088f9cbc(void *);
void FUN_088c3138(u32 *object){int i=0x13;u32 *entry=object+0xf;object[2]=1;object[1]=0xc;object[0]=(u32)&PTR_FUN_0896b120;object[5]=0;do{FUN_088f9cbc(entry);entry+=0x16;i--;}while(i!=0);object[10]=0;}
