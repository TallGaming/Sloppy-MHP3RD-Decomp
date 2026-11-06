/*
 * FUN_08908a54: test a selected bit in one of two words returned by FUN_08908a30.
 *
 * Main EBOOT, attempt-high-01 medium batch 4. Bit numbering and output layout are hypotheses.
 */

typedef unsigned int u32;void FUN_08908a30(u32 *out,void *context);
int FUN_08908a54(void *context,u32 bit)
{
    u32 words[2],mask;FUN_08908a30(words,context);mask=1<<(bit&0x1f);if((bit&0xff)<0x20)return (words[0]&mask)!=0;return (words[1]&mask)!=0;
}
