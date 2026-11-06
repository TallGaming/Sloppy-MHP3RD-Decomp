/*
 * FUN_089049f4: build a local callback descriptor from an embedded record and submit it.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Descriptor and argument roles are hypotheses.
 */

typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef short s16;
struct Local_089049f4 { void *table; int second; s8 dx; s8 dy; u8 fourth; int fifth; u8 zero; };
void FUN_08900fc0(void *manager,void *entry,int sixth,int x,int y);

void FUN_089049f4(void *manager,int second,u8 *entry,u8 fourth,int fifth,int sixth,s16 x,s16 y)
{
    u16 *record=*(u16 **)(entry+8); struct Local_089049f4 local;
    local.dx=(char)record[2]-(char)record[0]; local.dy=(char)record[3]-(char)record[1]; local.zero=0;
    *(void **)(record+0x10)=&local; local.table=(void *)0x0896b368; local.second=second; local.fourth=fourth; local.fifth=fifth;
    FUN_08900fc0(manager,entry,sixth,x,y);
}
