/* FUN_08956b40: allocate and register a type-18 tracked object.
 * Main EBOOT, attempt-high-01 medium batch 21. Object role is a hypothesis. */
typedef unsigned int u32;extern void *D_09bf5260;extern int PTR_DAT_0896ba30;void *FUN_08878c28(void*,int,int);void *FUN_09c01d70(int,void*);void FUN_09c0d66c(void*);
void *FUN_08956b40(unsigned char *owner){void *storage;u32 *object=0;storage=FUN_08878c28(D_09bf5260,0x220,0x10);if(storage!=0){object=FUN_09c01d70(0x220,storage);FUN_09c0d66c(object);object[0x84]=0;u32 serial=*(u32 *)(owner+0x28);object[0]=(u32)&PTR_DAT_0896ba30;*(u32 *)(owner+0x28)=serial+1;object[12]=(serial&0xffffff)|0x12000000;}return object;}
