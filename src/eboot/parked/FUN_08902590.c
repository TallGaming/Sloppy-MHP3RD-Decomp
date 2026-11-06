/* FUN_08902590: interpolate two output fields from a keyed sample table.
 * Main EBOOT, attempt-high-01 241-512 byte batch 1. Sample roles are hypotheses. */
extern float D_08969850;void FUN_08901db0(int*);
void FUN_08902590(int *state){int *table=(int *)state[0x15];if(table!=0){int base=table[1];int key=state[0];int index=state[0x14];if(*(int *)(base+table[0]*12-12)<key){}else{int *sample=(int *)(base+index*12);if(key!=sample[0]){float weight=(float)(key-sample[0])/(float)(sample[3]-sample[0]);float inverse=D_08969850-weight;state[0x17]=(int)(inverse*(float)sample[2]+weight*(float)sample[5]);state[0x16]=(int)(inverse*(float)sample[1]+weight*(float)sample[4]);FUN_08901db0(state);return;}}base+=index*12;state[0x17]=*(int *)(base+8);state[0x16]=*(int *)(base+4);}FUN_08901db0(state);}
