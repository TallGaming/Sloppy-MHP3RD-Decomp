/*
 * FUN_0890e208: allocate an entry and initialize it through FUN_0890d8b8.
 *
 * Main EBOOT, attempt-high-01 medium batch 5. Context and arguments are hypotheses.
 */

void *FUN_0890e008(void *);void FUN_0890d8b8(void *,int,int,int);
void FUN_0890e208(void *context,int first,int second,int third)
{void *entry=FUN_0890e008(context);if(entry==0)return;FUN_0890d8b8(entry,first,second,third);}
