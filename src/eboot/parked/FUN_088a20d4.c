/*
 * FUN_088a20d4: release and reset four parallel resource records.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: matching-size loop retains two resource-test operation differences.
 */
typedef unsigned char u8;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
#define VFIELD(b,t,o) (*(volatile t *)((volatile u8 *)(b)+(o)))
void FUN_08878e64(void *,void *); void FUN_0889c050(void *);
void FUN_08878f78(void *); void FUN_0889c088(void *);
void FUN_088a20d4(void *context,u8 *record)
{
    int i=0; u8 *a=record+0xdf0,*b=record+0xf70,*c=record+0x12f0;
    do { i++; if(VFIELD(a,void *,0xc)!=0) FUN_08878e64(context,VFIELD(a,void *,0xc));
         FUN_0889c050(a); FUN_08878f78(b); FUN_0889c088(c);
         a+=0x30; b+=0x80; c+=0x10; } while(i!=4);
}
