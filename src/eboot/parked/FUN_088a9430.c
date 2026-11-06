/*
 * FUN_088a9430: clear every record whose primary field matches a value.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: code shape matches except for one local control-transfer relocation.
 */
typedef unsigned char u8; typedef int s32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
void FUN_088a8e54(void *,void *);
void FUN_088a9430(u8 *o,int value){ int i=0;u8 *p=o+0xcc0; do{ while(1){ i++; if(FIELD(p,s32,4)!=-1&&FIELD(p,s32,8)==value)break;p+=0xc;if(i==16)return; }
 FUN_088a8e54(o,p+4);p+=0xc; }while(i!=16); }
