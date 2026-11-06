/*
 * FUN_0891ccfc: test whether a selected index is within the active slot count.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. Index role is a hypothesis.
 */

typedef unsigned char u8;int FUN_0891ccb8(void);
int FUN_0891ccfc(u8 *record)
{int index=FUN_0891ccb8();if(index<0||record[9]<index||record[9]<=index)return 0;return 1;}
