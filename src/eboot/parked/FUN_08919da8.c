/*
 * FUN_08919da8: return a selected entry when its decade matches the record.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Entry role is a hypothesis.
 */

typedef unsigned char u8;typedef short s16;void *FUN_0891dc64(void *,int);
void *FUN_08919da8(u8 *record,signed char selector)
{u8 *entry=(u8 *)FUN_0891dc64(record,selector);if(entry==0||*(s16 *)(entry+0x20)/10!=*(signed char *)(record+0x95))return 0;return entry;}
