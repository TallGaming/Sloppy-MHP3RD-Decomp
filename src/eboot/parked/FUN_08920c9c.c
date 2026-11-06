/*
 * FUN_08920c9c: test whether the global mode and optional save condition allow progress.
 *
 * Main EBOOT, attempt-high-01 medium batch 12. Mode meanings are hypotheses.
 */

extern void *D_08aace80;int FUN_088bc878(void *);int FUN_088bdfa0(void *);int FUN_0886624c(void *,int);
int FUN_08920c9c(void)
{void *manager=*(void **)0x09bb7b60;int state=FUN_088bc878(manager);if(state==0xcd){state=FUN_088bdfa0(manager);if((unsigned)(state-10)>9)return 0;if(FUN_0886624c(D_08aace80,0x1a5)==0)return 0;}else{state=FUN_088bdfa0(manager);if((unsigned)(state-10)>9)return 0;}return 1;}
