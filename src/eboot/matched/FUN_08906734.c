/*
 * FUN_08906734: generate byte candidates until both global searches reject one or 1001 tries pass.
 *
 * Main EBOOT, attempt-high-01 medium batch 3. Candidate and search meanings are hypotheses.
 */

typedef unsigned int u32; extern void *D_09bc1ed8;
u32 FUN_088e62f0(void *manager,int kind); int FUN_08906648(void *context,u32 value); int FUN_0890655c(void *context,u32 value);
u32 FUN_08906734(void *context)
{
    int tries=0;u32 value; do {tries++;value=FUN_088e62f0(D_09bc1ed8,1);value=(value+(value/0xc0)*0x40)&0xff;if(tries==0x3e9)return value;} while(FUN_08906648(context,value)!=0||FUN_0890655c(context,value)!=0);return value;
}
