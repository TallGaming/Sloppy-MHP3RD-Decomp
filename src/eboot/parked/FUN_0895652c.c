/* FUN_0895652c: allocate, clear, and register a type-9 tracked object.
 * Main EBOOT, attempt-high-01 medium batch 20. Object role is a hypothesis. */
typedef unsigned int u32; extern void *D_09bf5260; extern int PTR_DAT_0896b9f8;
void *FUN_08878c28(void *,int,int); void *FUN_09c01d70(int,void *); void FUN_09c02058(void *);
void *FUN_0895652c(unsigned char *owner){void *storage;u32 *object=0;storage=FUN_08878c28(D_09bf5260,0x100,0x10);if(storage!=0){int i=0;u32 *entry;object=FUN_09c01d70(0x100,storage);FUN_09c02058(object);object[0]=(u32)&PTR_DAT_0896b9f8;((unsigned char *)object)[0x68]=0;((unsigned char *)object)[0x69]=0;entry=object;do{i++;entry[27]=0;entry[28]=0;entry+=2;}while(i!=16);((unsigned char *)object)[0xec]=0;((unsigned char *)object)[0xed]=0;u32 serial=*(u32 *)(owner+0x28);*(u32 *)(owner+0x28)=serial+1;object[12]=(serial&0xffffff)|0x09000000;}return object;}
