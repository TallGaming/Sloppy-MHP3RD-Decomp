/*
 * FUN_089033fc: initialize one record and optionally copy nine words into offset 0x20.
 *
 * Main EBOOT, attempt-high-01 medium batch 2. Record and source layouts are hypotheses.
 */

typedef unsigned char u8;
void FUN_08902e04(void *record,void *source,int value);

void FUN_089033fc(u8 *record, int *source, void *initializer)
{
    int index;
    if (initializer==0) *(int *)(record+0x48)=0; else FUN_08902e04(record,initializer,0);
    if (source!=0) {
        *(int **)(record+0x44)=source;
        for(index=0;index<9;index++) *(int *)(record+0x20+index*4)=source[index];
    }
}
