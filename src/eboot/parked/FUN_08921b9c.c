/*
 * FUN_08921b9c: report whether either of two global lookup checks succeeds.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Lookup roles are hypotheses.
 */

int FUN_088853f0(void *);int FUN_0888546c(void *,void *);
int FUN_08921b9c(void *unused,void *value)
{void *global=*(void **)0x08ab4650;int first=FUN_088853f0(global),second=FUN_0888546c(global,value);return first!=0||second!=0;}
