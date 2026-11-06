/*
 * FUN_088dd168: interpolate two short coordinates over the owner's active lifetime.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: two-short interpolation remains one instruction short and different.
 */
void FUN_088dd168(unsigned char *owner,short *out){short delta;if(*(short *)(owner+0x96)<1){out[0]=*(short *)(owner+0xfc);out[1]=*(short *)(owner+0xfe);return;}delta=*(short *)(owner+0xfc)-*(short *)(owner+0x100);out[0]=delta;out[0]=(short)(((int)delta*(int)*(short *)(owner+0x94))/(int)*(short *)(owner+0x96))+*(short *)(owner+0x100);delta=*(short *)(owner+0xfe)-*(short *)(owner+0x102);out[1]=delta;out[1]=(short)(((int)delta*(int)*(short *)(owner+0x94))/(int)*(short *)(owner+0x96))+*(short *)(owner+0x102);}
