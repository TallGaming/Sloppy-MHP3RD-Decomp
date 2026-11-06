/*
 * FUN_0891e910: calculate two scaled positions from a shared local origin.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. Vector and table roles are hypotheses.
 */

typedef unsigned char u8;typedef unsigned int u32;void FUN_088a0cfc(void *,float *,int);u32 FUN_0889fbd0(void *,int);void FUN_088759ec(float *,void *,u32);
void FUN_0891e910(u8 *record,float *first,float *second)
{float origin[4],direction[4],scale;void *owner=*(void **)(record+0xc);int i;FUN_088a0cfc(owner,origin,0x1c);scale=*(float *)((u8 *)owner+0xa0);FUN_088759ec(direction,(void *)0x08a05770,FUN_0889fbd0(owner,0x19));for(i=0;i<3;i++)first[i]=origin[i]+direction[i]*scale;first[3]=origin[3];FUN_088759ec(direction,(void *)0x08a05760,FUN_0889fbd0(owner,0x19));for(i=0;i<3;i++)second[i]=origin[i]+direction[i]*scale;second[3]=origin[3];}
