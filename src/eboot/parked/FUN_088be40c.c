/*
 * FUN_088be40c: classify the ten-thousands group of a 16-bit identifier.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size classifier retains two local switch-table encoding differences.
 */
int FUN_088be40c(void *unused,unsigned value){switch((value&0xffff)/10000){case 0:return 1;case 1:case 2:case 3:return 3;case 4:case 6:return 2;default:return 0;}}
