/* FUN_089073d4: age six pending entries and release completed slots.
 * Main EBOOT, attempt-high-01 241-512 byte batch 3. Entry roles are hypotheses. */
typedef unsigned int u32;extern unsigned char *D_08aace80;void FUN_08907090(void*,signed char);u32 FUN_0890642c(void*);
void FUN_089073d4(unsigned char *record){unsigned char *entry=record;do{if((signed char)entry[0x6e]!=-1){signed char timer=entry[0x74];if(timer==0||(entry[0x74]=timer-1,timer==1)){FUN_08907090(record,(signed char)entry[0x6e]);entry[0x6e]=0xff;u32 index=FUN_0890642c(record);*(u32 *)(D_08aace80+0x5eaf0)|=1u<<(index&31);}}entry++;}while(entry!=record+6);}
