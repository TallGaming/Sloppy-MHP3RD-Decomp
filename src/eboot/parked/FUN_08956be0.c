/* FUN_08956be0: allocate and register a type-19 tracked object.
 * Main EBOOT, attempt-high-01 medium batch 21. Object role is a hypothesis. */
typedef unsigned int u32;extern void *D_09bf5260;extern int PTR_09dcae28;void *FUN_08878c28(void*,int,int);void *FUN_09c01d70(int,void*);void FUN_09c02058(void*);void FUN_088f9cd0(void*);
void *FUN_08956be0(unsigned char *owner){void *storage;u32 *object=0;storage=FUN_08878c28(D_09bf5260,0xe0,0x10);if(storage!=0){object=FUN_09c01d70(0xe0,storage);FUN_09c02058(object);object[0]=(u32)&PTR_09dcae28;FUN_088f9cd0(object+0x21);u32 serial=*(u32 *)(owner+0x28);*(u32 *)(owner+0x28)=serial+1;object[12]=(serial&0xffffff)|0x13000000;}return object;}
