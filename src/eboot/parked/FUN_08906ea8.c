/* FUN_08906ea8: scale a computed float by a bounded table coefficient.
 * Main EBOOT, attempt-high-01 small-medium batch 1. Table role is a hypothesis. */
typedef unsigned char u8;typedef unsigned int u32;extern u8 D_089fd5ec[];float FUN_08906d98(void);
float FUN_08906ea8(u8 *record){u32 index=1;u8 coefficient;float value;if((u8)(record[3]-1)<20)index=record[3];coefficient=D_089fd5ec[index*8];value=FUN_08906d98();return (float)coefficient*value;}
