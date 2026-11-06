/* FUN_08956934: allocate and register a type-15 tracked object.
 * Main EBOOT, attempt-high-01 medium batch 21. Object role is a hypothesis. */
typedef unsigned int u32;extern void *D_09bf5260;void *FUN_08878c28(void*,int,int);void *FUN_09c01d70(int,void*);void FUN_0893b37c(void*);void FUN_08878e64(void*,void*);
void *FUN_08956934(unsigned char *owner){void *pool=D_09bf5260;void *storage;unsigned char *object=0;storage=FUN_08878c28(D_09bf5260,0xf0,0x10);if(storage!=0){object=FUN_09c01d70(0xf0,storage);FUN_0893b37c(object);if(object==0)FUN_08878e64(pool,storage);else{u32 serial=*(u32 *)(owner+0x28);*(u32 *)(owner+0x28)=serial+1;*(u32 *)(object+0x30)=(serial&0xffffff)|0x0f000000;}}return object;}
