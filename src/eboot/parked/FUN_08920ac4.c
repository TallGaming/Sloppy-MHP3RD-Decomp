/* FUN_08920ac4: clear an option array and dispatch its current input state.
 * Main EBOOT, attempt-high-01 241-512 byte batch 10. Option roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;extern void *D_08a31df0;void FUN_088ebb10(void*,int,int);u32 FUN_08920594(void*,u16);void FUN_0883bac8(void*,int);void FUN_089207c0(void*,void*,int);void FUN_088fb378(void*,int,int);
void FUN_08920ac4(u8 *owner,u16 input,u8 *state,int value){u32 flags;FUN_088ebb10(state+0x2a,0,(u32)state[10]<<2);flags=FUN_08920594(state,input);if((flags&0xa0)==0){if((flags&0x50)!=0){FUN_0883bac8(D_08a31df0,5);FUN_089207c0(owner,state,value);return;}}else{FUN_088fb378(owner+0x35c,(flags&0x80)==0,0);FUN_0883bac8(D_08a31df0,4);}FUN_089207c0(owner,state,value);}
