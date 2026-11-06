/* FUN_089497d4: initialize an object vtable and zero its trailing state.
 * Main EBOOT, attempt-high-01 small-medium batch 1. Object role is a hypothesis. */
typedef unsigned int u32;typedef unsigned short u16;extern int PTR_DAT_0896ba80;void FUN_09c02058(void*);
void FUN_089497d4(u32 *object){FUN_09c02058(object);object[0]=(u32)&PTR_DAT_0896ba80;object[0x1c]=0;object[0x1d]=0;object[0x1e]=0;object[0x1f]=0;*(u16 *)(object+0x26)=0;((unsigned char*)object)[0x9a]=0xff;object[0x24]=0;object[0x25]=0;}
