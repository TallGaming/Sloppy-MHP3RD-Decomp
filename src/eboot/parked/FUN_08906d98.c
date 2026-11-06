/* FUN_08906d98: compute a multiplier from three flags and a mode byte.
 * Main EBOOT, attempt-high-01 241-512 byte batch 3. Flag roles are hypotheses. */
extern float D_08969890,D_08969894,D_08969898,D_0896989c,D_089698a0;int FUN_08906a78(void*,int);
float FUN_08906d98(unsigned char *record){float value;if(FUN_08906a78(record,0x13)==0)value=D_08969894;else value=D_08969890;if(FUN_08906a78(record,0x14)!=0)value*=D_08969898;if(FUN_08906a78(record,0x2e)!=0)value*=D_0896989c;if((signed char)record[0x98]==4)return value*D_08969890;if((signed char)record[0x98]==7)return value*D_089698a0;return value;}
