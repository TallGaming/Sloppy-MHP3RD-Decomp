/* FUN_08902be4: advance a keyed sample cursor and its active subrecord.
 * Main EBOOT, attempt-high-01 241-512 byte batch 1. Cursor roles are hypotheses. */
void FUN_08902590(int*);int FUN_08902688(void*,signed char);
int FUN_08902be4(int *state,signed char mode){int result,index;int *table;FUN_08902590(state);if(state[0]<state[1]){table=(int *)state[0x15];if(table!=0){index=state[0x14];if(*(int *)(table[1]+index*12+12)<=state[0]+1&&index<table[0]-1)state[0x14]=index+1;}}result=FUN_08902688(state,mode);if(result==1&&mode==1){state[0x14]=0;return 1;}return result;}
