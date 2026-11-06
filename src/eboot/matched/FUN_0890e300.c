/*
 * FUN_0890e300: allocate an entry and initialize it through FUN_0890d744.
 *
 * Main EBOOT, attempt-high-01 medium batch 6. Roles are hypotheses.
 */

void *FUN_0890e008(void *); void FUN_0890d744(void *,int,int);
void FUN_0890e300(void *context,int first,int second)
{void *entry=FUN_0890e008(context);if(entry==0)return;FUN_0890d744(entry,first,second);}
