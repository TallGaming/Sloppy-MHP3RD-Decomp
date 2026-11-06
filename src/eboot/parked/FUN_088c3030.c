/*
 * FUN_088c3030: destroy nineteen fixed-size entries and restore the base vtable.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: reverse destructor loop remains shorter with vtable differences.
 */
typedef unsigned int u32; extern void *PTR_FUN_0896b120; extern void *PTR_LAB_0896a890; void FUN_088f9cc8(void *);
void FUN_088c3030(u32 *object){u32 *entry;int i;object[0]=(u32)&PTR_FUN_0896b120;if(object!=(u32 *)0xffffffc4&&(entry=object+0x1b1)!=object+0xf){i=0x13;do{entry-=0x16;i--;FUN_088f9cc8(entry);}while(i!=0);}object[0]=(u32)&PTR_LAB_0896a890;}
