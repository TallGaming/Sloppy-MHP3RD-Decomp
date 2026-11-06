/* Purpose: initialize a temporary endpoint and bind it to an object's port. */
extern unsigned int FUN_089610b0(void*);extern unsigned int FUN_08961048(void*,unsigned short,int,int);extern int FUN_08879f60(int);
void FUN_0887adfc(void*object){unsigned char endpoint[16];unsigned int status=FUN_089610b0(endpoint);if(FUN_08879f60(status)>=0)FUN_08879f60(FUN_08961048(endpoint,*(unsigned short*)((unsigned char*)object+0x12),0x2000,0));}
