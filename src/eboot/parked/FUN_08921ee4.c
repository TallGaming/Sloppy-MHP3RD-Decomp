/*
 * FUN_08921ee4: trigger every matching entry in a sixty-element half-word table.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Table role is a hypothesis.
 */

typedef short s16;extern void *D_08aace80;void FUN_0886a51c(void *,int);
void FUN_08921ee4(void *unused,s16 value)
{s16 *entry=(s16 *)0x08a09d26;int index=0;do{if(*entry==value)FUN_0886a51c(D_08aace80,index);index++;entry+=4;}while(index!=0x3c);}
