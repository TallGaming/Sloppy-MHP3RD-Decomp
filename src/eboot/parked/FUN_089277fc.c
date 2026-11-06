/* FUN_089277fc: clear menu entries and dispatch their mode-specific builder.
 * Main EBOOT, attempt-high-01 241-512 byte batch 12. Menu roles are hypotheses. */
typedef unsigned char u8;void FUN_088ebb10(void*,int,int);void FUN_08926eec(void*,u8);void FUN_08926b20(void*,u8);void FUN_089275a0(void*,u8);void FUN_08923068(void*,u8);void FUN_08923d48(void*,u8);
void FUN_089277fc(u8 *state,unsigned int mode,u8 option){FUN_088ebb10(state+0x1d8,0,0x30);switch(mode){case 0:FUN_08926eec(state,option);return;case 4:FUN_08926b20(state,option);return;case 0xd:FUN_089275a0(state,option);return;case 0xe:FUN_08923068(state,option);return;case 0xf:FUN_08923d48(state,option);return;default:return;}}
