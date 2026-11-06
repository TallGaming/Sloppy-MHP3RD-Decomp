/*
 * FUN_08904a68: prepare fixed local tables, fill seven callback slots and submit one descriptor.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Fixed data and callback roles are hypotheses.
 */

typedef unsigned char u8;
void FUN_089049f4(void *manager,int second,void *entry,int fourth,int fifth,int sixth,int x,int y);
void FUN_08904a68(void *manager,int second,char enabled)
{
    void *outer=(void *)0x0896b3f8,*inner=(void *)0x0896b428; void **slot=(void **)0x089fc510; int index=0x59;
    *(void **)0x089fc414=&outer; *(void **)0x089fc438=&outer; *(void **)0x089fc60c=&outer;
    do { void *value=0; if(enabled==0)value=&inner; index++; *slot=value; slot+=9; } while(index!=0x60);
    FUN_089049f4(manager,second,(void *)0x089697cc,0x0b,0,0,0,0);
}
