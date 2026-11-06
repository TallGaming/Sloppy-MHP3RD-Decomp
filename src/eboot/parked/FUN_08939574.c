/* FUN_08939574: combine two record vectors and accumulate one scalar field.
 * Main EBOOT, attempt-high-01 small-medium batch 1. Vector role is a hypothesis. */
void FUN_08811efc(void*,void*,void*);
void FUN_08939574(unsigned char *record){float value;FUN_08811efc(record+0x20,record+0x20,record+0x90);value=*(float *)(record+0x94);*(float *)(record+0x94)=value+*(float *)(record+0xb8);}
