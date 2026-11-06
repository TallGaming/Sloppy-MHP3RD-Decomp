/*
 * FUN_089035c0: initialize two records, copy fixed words and split a returned word into bytes.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Fixed data and byte fields are hypotheses.
 */

typedef unsigned char u8; typedef unsigned int u32;
void FUN_089033fc(void *record,void *source,void *initializer); u32 FUN_088fb80c(void *source,int mode);

void FUN_089035c0(u8 *record, void *source)
{
    u32 value;
    FUN_089033fc(record+4,source,(void *)0x089faea4); FUN_089033fc(record+0x54,source,0);
    *(u32 *)(record+0x7c)=*(u32 *)0x089fae88; *(u32 *)(record+0x80)=*(u32 *)0x089fae8c;
    value=FUN_088fb80c((void *)0x089fae80,0);
    record[0x8b]=value>>24; record[0x89]=value>>8; record[0x8a]=value>>16; record[0x88]=value;
}
