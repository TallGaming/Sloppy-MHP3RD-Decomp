/*
 * FUN_089053a4: convert two byte arguments and forward the result plus five more values.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Argument roles and call signatures are hypotheses.
 */

typedef unsigned char u8;
int FUN_088fb210(void *context,u8 a,u8 b); void FUN_089052f8();
void FUN_089053a4(void *context,void *second,u8 a,u8 b,int c,int d,int e,int f)
{
    int converted=FUN_088fb210(context,a,b); FUN_089052f8(context,second,converted,c,d,e,f);
}
