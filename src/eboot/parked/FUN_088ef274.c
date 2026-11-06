/* FUN_088ef274: run a callback repeatedly until the global stop flag is set.
 * PARKED: callback/global loop remains longer and broadly different. */
typedef void(*Callback)(int);void FUN_08960c50(int);void FUN_08865ff4(int);
int FUN_088ef274(void *unused,int **argument){int *state=*argument;if(*(int *)0x09beb08c){FUN_08960c50(0);return 0;}do{FUN_08865ff4(0);if(state[2])((Callback)state[2])(state[1]);state[1]++;}while(*(int *)0x09beb08c==0);FUN_08960c50(0);return 0;}
