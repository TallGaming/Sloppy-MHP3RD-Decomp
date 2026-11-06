/* FUN_089562b4: allocate and register a type-4 tracked object.
 * Main EBOOT, attempt-high-01 medium batch 20. Object role is a hypothesis. */
typedef unsigned int u32;typedef unsigned short u16; extern void *D_09bf5260; extern int PTR_DAT_0896b560;
void *FUN_08878c28(void *,int,int); void *FUN_09c01d70(int,void *); void FUN_09c02058(void *);
void *FUN_089562b4(unsigned char *owner){void *storage;u32 *object=0;storage=FUN_08878c28(D_09bf5260,0x70,0x10);if(storage!=0){object=FUN_09c01d70(0x70,storage);FUN_09c02058(object);u32 serial=*(u32 *)(owner+0x28);*(u32 *)(owner+0x28)=serial+1;object[0]=(u32)&PTR_DAT_0896b560;*(u16 *)(object+25)=0xffff;object[12]=(serial&0xffffff)|0x04000000;}return object;}
