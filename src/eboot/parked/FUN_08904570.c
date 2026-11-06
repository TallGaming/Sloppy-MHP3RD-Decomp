/*
 * FUN_08904570: build a local callback descriptor and submit a seven-argument operation.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Descriptor and argument roles are hypotheses.
 */

typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef short s16;
extern void *D_09beb0bc;
struct Local_08904570 { void *table; int third; s8 dx; s8 dy; u8 fourth; int eighth; u8 stack; };
void FUN_0890112c(void *manager,u16 *record,int fifth,int zero,int x,int y,int flag);

void FUN_08904570(void *unused,u16 *record,int third,u8 fourth,int fifth,s16 x,s16 y,int eighth,u8 stack)
{
    struct Local_08904570 local; *(void **)(record+0x10)=&local;
    local.dx=(char)record[2]-(char)record[0]; local.dy=(char)record[3]-(char)record[1];
    local.stack=stack; local.table=(void *)0x0896b368; local.third=third; local.fourth=fourth; local.eighth=eighth;
    FUN_0890112c(D_09beb0bc,record,fifth,0,x,y,0);
}
