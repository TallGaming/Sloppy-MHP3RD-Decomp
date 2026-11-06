/*
 * FUN_0891d880: release one selected half-word handle and clear it.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. Handle role is a hypothesis.
 */

typedef unsigned char u8;typedef short s16;
void FUN_0891d880(u8 *record,signed char selector)
{s16 *slot=(s16 *)(record+0x44+selector*2);if(*(s16 *)(record+0x44)==*(s16 *)(record+0x46)){*slot=-1;return;}((void (*)(void *,int))0x09c86970)(*(void **)0x09da9600,*slot);*slot=-1;}
