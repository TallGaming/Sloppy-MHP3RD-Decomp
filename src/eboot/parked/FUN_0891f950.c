/* FUN_0891f950: dispatch one item descriptor through the active loader path.
 * Main EBOOT, attempt-high-01 241-512 byte batch 10. Loader roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;extern void *D_08a31df0;extern short D_089caf9c[];void FUN_08851c04(void*);void FUN_0884b164(void*,void*,int);void FUN_0884b360(void*,void*,int);void FUN_0884b598(void*);
void FUN_0891f950(u8 *state,int value,u16 *item){FUN_08851c04(D_08a31df0);if(item[0]==0xffff)return;if(D_089caf9c[item[0]*10]==0){FUN_0884b164(D_08a31df0,item,value);return;}if(state[0x1cb]==0){FUN_0884b360(D_08a31df0,item,value);return;}FUN_0884b598(D_08a31df0);}
