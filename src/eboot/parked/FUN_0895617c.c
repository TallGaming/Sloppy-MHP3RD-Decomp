/* FUN_0895617c: allocate and register a type-2 tracked object.
 * Main EBOOT, attempt-high-01 medium batch 20. Object role is a hypothesis. */
typedef unsigned int u32; extern void *D_09bf5260; extern int PTR_DAT_0896b4f0;
void *FUN_08878c28(void *,int,int); void *FUN_09c01d70(int,void *); void FUN_09c0d66c(void *);
void *FUN_0895617c(unsigned char *owner){void *storage;u32 *object=0;storage=FUN_08878c28(D_09bf5260,0x220,0x10);if(storage!=0){object=FUN_09c01d70(0x220,storage);FUN_09c0d66c(object);u32 serial=*(u32 *)(owner+0x28);*(u32 *)(owner+0x28)=serial+1;object[0]=(u32)&PTR_DAT_0896b4f0;object[12]=(serial&0xffffff)|0x02000000;}return object;}
