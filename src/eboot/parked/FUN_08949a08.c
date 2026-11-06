/*
 * FUN_08949a08: map global manager modes to one of seven compact categories.
 *
 * Main EBOOT, attempt-high-01 medium batch 17. Category meanings are hypotheses.
 */

int FUN_088bccb8(void *);
int FUN_08949a08(void)
{switch(FUN_088bccb8(*(void **)0x09bb7b60)){case 1:case 0xe:return 3;case 2:case 0xf:return 1;case 3:case 0x10:return 2;case 4:case 0x11:return 4;case 5:case 0x12:return 5;case 0xc:case 0x13:return 0;default:return 7;}}
