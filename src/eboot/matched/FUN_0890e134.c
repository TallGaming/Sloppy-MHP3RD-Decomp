/*
 * FUN_0890e134: allocate an entry and initialize it through FUN_0890da9c.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Context and arguments are hypotheses.
 */

void *FUN_0890e008(void *);void FUN_0890da9c(void *,int,int);
void FUN_0890e134(void *context,int value,int state)
{void *entry=FUN_0890e008(context);if(entry==0)return;FUN_0890da9c(entry,value,state);}
