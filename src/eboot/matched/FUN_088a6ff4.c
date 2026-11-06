/*
 * FUN_088a6ff4: add a float delta to one field selected by a short code.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 */
typedef unsigned char u8;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
void FUN_088a6ff4(float value,u8 *o,short code){ if(code==0x10)FIELD(o,float,0x228)+=value; else if(code==0x11)FIELD(o,float,0x22c)+=value;
 else if(code==0x12)FIELD(o,float,0x230)+=value; else if(code==0x13)FIELD(o,float,0x238)+=value; else if(code==0x14)FIELD(o,float,0x234)+=value; }
