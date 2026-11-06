/*
 * FUN_088b648c: mark a linked-list registration removed, then destroy the object.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: linked-list guards and the vtable/global loads lower to a shorter shape.
 */
typedef unsigned char u8; typedef unsigned int u32; extern u8 *D_09bf5260; extern void *PTR_LAB_0896afd0; void FUN_088b0000(void *);
void FUN_088b648c(void **object){u8 *node;*object=&PTR_LAB_0896afd0;if(*(void **)(D_09bf5260+0x30)){for(node=*(u8 **)(D_09bf5260+0x2c);node;node=*(u8 **)(node+4)){if(*(void **)(node+0xc)&&*(void ***)(node+0xc)==object)*(u32 *)(node+0x48)|=2;}}FUN_088b0000(object);}
