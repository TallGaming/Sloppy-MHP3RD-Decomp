/* FUN_088fb464: set an animation mode and reset both embedded tracks when enabled.
 * Main EBOOT, non-G2 group-B medium match. Names and layout are hypotheses. */
void FUN_088f9ce4(void*,int);
void FUN_088fb464(char*p,int mode){*(int*)(p+8)=mode;if(mode==1){FUN_088f9ce4(p+0x10,0);FUN_088f9ce4(p+0x60,0);}}
