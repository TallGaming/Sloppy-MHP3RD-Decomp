/* FUN_089182f0: advance a four-state availability check.
 * Main EBOOT, attempt-high-01 241-512 byte batch 7. State roles are hypotheses. */
typedef unsigned int u32;extern void *D_09bb7b60;u32 FUN_0891d4b4(void);u32 FUN_088be6b4(void*);int FUN_0891d5d0(void*,int,int);
void FUN_089182f0(unsigned char *state){int mode=*(int *)(state+0x20);if(mode==1){u32 needed=FUN_0891d4b4(),available=FUN_088be6b4(D_09bb7b60);if(available>=needed)state[0x76]=1;if(state[0x76]!=0){*(int *)(state+0x20)=2;return;}*(int *)(state+0x20)=1;return;}if(mode==2){if(FUN_0891d5d0(state,1,4)==0){*(int *)(state+0x20)=2;return;}}else{if(mode!=0){*(int *)(state+0x20)=mode;return;}if(FUN_0891d4b4()!=0){*(int *)(state+0x20)=1;return;}}*(int *)(state+0x20)=3;}
