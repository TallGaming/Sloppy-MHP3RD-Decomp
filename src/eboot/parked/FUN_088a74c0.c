/*
 * FUN_088a74c0: validate an action mode against the object's current state byte.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: simplified range predicates compile to a shorter control flow.
 */
typedef unsigned char u8; typedef unsigned int u32;
int FUN_088a74c0(u8 *o,u32 mode){ u32 s; if((signed char)o[0x18c]!=0)return 0; s=o[0x18d];
 if((s>=10&&s<=14)||(s>=0x66&&s<0x68))return mode<2;
 if((s>=0x4a&&s<=0x4e)||(s>=0x68&&s<=0x69))return mode==0||mode==2; return 0; }
