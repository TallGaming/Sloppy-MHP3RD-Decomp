/*
 * FUN_08949ad8: search a category-selected byte list for a requested value.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Category and list roles are hypotheses.
 */

typedef unsigned char u8;int FUN_08949a08(void);
int FUN_08949ad8(void *unused,unsigned selector,unsigned short value)
{u8 *entry;int category;if((selector&0xff)>=0x4b)return 0;category=FUN_08949a08();if(category==7)return 0;entry=*(u8 **)(0x08a1774c+(((selector&0xff)*6+category)*4));if(entry!=0){while(*entry!=0xff){if(*entry==value)return 1;entry++;}}return 0;}
