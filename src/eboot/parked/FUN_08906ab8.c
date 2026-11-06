/* FUN_08906ab8: select one of two constants from a five-byte lookup result.
 * Main EBOOT, attempt-high-01 small-medium batch 1. Constant roles are hypotheses. */
extern int D_08969888,D_0896988c;int FUN_08906a78(int,int);
int FUN_08906ab8(int value){if(FUN_08906a78(value,5)==0)return D_0896988c;return D_08969888;}
