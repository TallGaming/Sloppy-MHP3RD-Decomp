/*
 * FUN_0890e198: allocate an entry, initialize it through FUN_0890d9f4 and report success.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Context and arguments are hypotheses.
 */

void *FUN_0890e008(void *);void FUN_0890d9f4(void *,int,int,int);
int FUN_0890e198(void *context,int first,int second,int state)
{void *entry=FUN_0890e008(context);if(entry!=0)FUN_0890d9f4(entry,first,second,state);return entry!=0;}
