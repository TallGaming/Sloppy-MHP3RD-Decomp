/*
 * FUN_08943ddc: return a record address from one of three indexed tables.
 *
 * Main EBOOT, attempt-high-01 medium batch 16. Mode and table roles are hypotheses.
 */

void *FUN_08943ddc(void *unused,signed char mode,unsigned index)
{index&=0xffff;if(mode==1)return(void *)(0x08a13a74+index*0x16);if(mode==0)return(void *)(0x08a132e4+index*0x16);if(mode==2)return(void *)(0x08a14204+index*0x16);return 0;}
