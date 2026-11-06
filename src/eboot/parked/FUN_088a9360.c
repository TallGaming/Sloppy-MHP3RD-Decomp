/*
 * FUN_088a9360: remove records matching an alternate field and second resource kind.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: alternate-field loop remains longer and differently allocated.
 */
typedef unsigned char u8; typedef int s32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_09bf5260; void FUN_08955e8c(void *); void FUN_088a8e54(void *,void *);
void FUN_088a9360(u8 *o,int value){ int i=0;u8 *p=o+0xcc0; do{ while(1){ i++; if(FIELD(p,s32,4)!=-1&&FIELD(p,s32,0xc)==value)break;p+=0xc;if(i==16)return; }
 p+=0xc;FUN_08955e8c(D_09bf5260);FUN_088a8e54(o,p-8); }while(i!=16); }
