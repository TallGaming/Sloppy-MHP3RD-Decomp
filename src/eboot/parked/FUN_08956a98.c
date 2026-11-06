/* FUN_08956a98: allocate and register a type-17 tracked object.
 * Main EBOOT, attempt-high-01 medium batch 21. Object role is a hypothesis. */
typedef unsigned int u32;extern void *D_09bf5260;extern int PTR_09dcadb8;void *FUN_08878c28(void*,int,int);void *FUN_09c01d70(int,void*);void FUN_09c02058(void*);void FUN_088f9cd0(void*);
void *FUN_08956a98(unsigned char *owner){void *storage;u32 *object=0;storage=FUN_08878c28(D_09bf5260,0xe0,0x10);if(storage!=0){object=FUN_09c01d70(0xe0,storage);FUN_09c02058(object);object[0]=(u32)&PTR_09dcadb8;FUN_088f9cd0(object+0x23);u32 serial=*(u32 *)(owner+0x28);*(u32 *)(owner+0x28)=serial+1;object[12]=(serial&0xffffff)|0x11000000;}return object;}
