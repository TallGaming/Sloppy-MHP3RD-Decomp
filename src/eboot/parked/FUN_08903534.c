/*
 * FUN_08903534: initialize four adjacent 0x50-byte records from fixed tables.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Fixed data roles are hypotheses.
 */

typedef unsigned char u8;
void FUN_089033fc(void *record,void *source,void *initializer);
void FUN_08903534(u8 *record)
{
    FUN_089033fc(record+0x00,(void *)0x089faad8,(void *)0x089fa71c);
    FUN_089033fc(record+0x50,(void *)0x089faafc,(void *)0x089fa734);
    FUN_089033fc(record+0xa0,(void *)0x089fab20,0);
    FUN_089033fc(record+0xf0,(void *)0x089fab44,0);
    *(int *)(record+0x140)=0;
}
