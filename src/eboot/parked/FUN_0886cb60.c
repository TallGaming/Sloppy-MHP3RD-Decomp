/* Purpose: test one derived bit for a six-value identifier range. */
unsigned int FUN_0886cb60(void*object,int id,int sub){unsigned int value=id*5+sub,bit=value-0x18a8d,index=value-0x18a6e;if((int)bit>=0)index=bit;if((unsigned)(id-0x4ee9)<6)return((*(unsigned int*)((unsigned char*)object+0x5d474+((int)index>>5)*4))&(1u<<(bit&31)))!=0;return 0;}
