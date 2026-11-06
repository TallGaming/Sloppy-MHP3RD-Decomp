/*
 * FUN_088a8c4c: select one embedded object region by numeric kind.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: switch body matches except for two local jump-table relocations.
 */
typedef unsigned char u8;
void *FUN_088a8c4c(u8 *o,int kind){ switch(kind){case 0:return o+0x478;case 1:return o+0x4d0;case 2:return o+0x490;
case 3:return o+0x4a0;case 4:return o+0x4b0;case 5:return o+0x4c0;case 6:return o+0x484;default:return 0;} }
