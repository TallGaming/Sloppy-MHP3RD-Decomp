/*
 * FUN_0891a5d8: refresh ten embedded entries and report any size change.
 *
 * Main EBOOT, attempt-high-01 medium batch 9. Entry roles are hypotheses.
 */

typedef unsigned char u8;void FUN_08902688(void *,int);int FUN_088f9fc8(void *);int FUN_088facd4(void *);
int FUN_0891a5d8(u8 *record)
{int changed=0,count=0;record+=0x10;do{int first,second;FUN_08902688(record,0);first=FUN_088f9fc8(record);second=FUN_088facd4(record);count++;if(first!=second)changed=1;record+=0x50;}while(count!=10);return changed;}
