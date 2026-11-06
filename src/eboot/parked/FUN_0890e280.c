/*
 * FUN_0890e280: allocate an entry, initialize five values and report success.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Roles are hypotheses.
 */

void *FUN_0890e008(void *); void FUN_0890d800(void *,int,int,int,int);
int FUN_0890e280(void *context,int first,int second,int third,int fourth)
{void *entry=FUN_0890e008(context);if(entry!=0)FUN_0890d800(entry,first,second,third,fourth);return entry!=0;}
