/*
 * FUN_089052f8: forward one operation through FUN_08904f78.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. The callee signature and mode role are hypotheses.
 */

void FUN_08904f78();
void FUN_089052f8(void *first,void *second,int mode,...)
{
    if(mode==1||mode==3){FUN_08904f78();return;} FUN_08904f78();
}
