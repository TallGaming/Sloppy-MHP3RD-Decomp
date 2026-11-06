/*
 * FUN_088d0608: run two object hooks and advance motion state when not paused.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: float/state advance remains longer and differently scheduled.
 */
typedef unsigned char u8; typedef void (*Hook)(void *); extern u8 *D_08aace80; extern float D_089684b4;
void FUN_088d0608(int *o){((Hook)(*(void ***)o)[9])(o);((Hook)(*(void ***)o)[7])(o);if(D_08aace80[0x60470]==0){o[0x26]=(int)((float)o[0x26]+D_089684b4);*(short *)(o+0x24)=(short)(o[0x25]+1);o[0x25]++;}}
