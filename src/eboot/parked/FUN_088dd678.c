/*
 * FUN_088dd678: update an owner transform and apply a selected global matrix row.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: global matrix selection remains shorter and differently allocated.
 */
typedef unsigned char u8; extern u8 *D_08a29198; extern float D_09bc1ad0[]; void FUN_088dcb98(void *,void *,u8); void FUN_088dd5cc(float,void *,void *,float *);
void FUN_088dd678(void *out,void *tmp,u8 *record){unsigned i;FUN_088dcb98(out,record+0x20,record[0x280]);i=D_08a29198[0xe00];FUN_088dd5cc(*(float *)(D_08a29198+0xdfc)**(float *)(record+0x2c+i*0x10),out,tmp,D_09bc1ad0+i*16);}
