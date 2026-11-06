/*
 * FUN_0890655c: build a 26-byte key and search ten global entries for a matching active item.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Global table and key roles are hypotheses.
 */

typedef unsigned char u8; typedef unsigned int u32;
extern void *D_08a2919c; extern u8 *D_08aace80;
int FUN_08867d40(void *manager,int index); void FUN_0882d66c(void *manager,u8 *key,int size,int value);
int FUN_08906550(void *field); int FUN_0880e8dc(void *field,u8 *key,int size);
int FUN_0890655c(void *unused,u32 value)
{
    u8 key[32],*entry=D_08aace80+0x5d490; int index=0;
    FUN_0882d66c(D_08a2919c,key,0x1a,FUN_08867d40(D_08aace80,(value&0xff)+0x634));
    for(;;){int active=FUN_08906550(entry+0x18);index++;if(active!=0&&FUN_0880e8dc(entry+0x20,key,0x1a)==0)break;entry+=0xa0;if(index==10)return 0;} return 1;
}
