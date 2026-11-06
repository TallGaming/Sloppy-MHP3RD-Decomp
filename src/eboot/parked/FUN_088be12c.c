/*
 * FUN_088be12c: classify the owner's table type into one of three groups.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact-size switch retains two local switch-table encoding differences.
 */
int FUN_088f2df8(void *);
int FUN_088be12c(unsigned char *owner){int type;if(!*(void **)(owner+0x10))return 0;type=FUN_088f2df8(*(void **)(owner+0x10));switch(type){case 8:case 9:case 10:case 11:case 12:return 2;case 13:return 3;case 14:case 15:return 1;default:return 0;}}
