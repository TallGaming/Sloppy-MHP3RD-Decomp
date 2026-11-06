/*
 * FUN_088a218c: release three object resources and update a global slot.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: global update and repeated virtual lookup lower to a longer frame.
 */
typedef unsigned char u8; typedef unsigned int u32;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
extern void *D_09beb090; typedef u8 *(*GetChild)(void *);
void FUN_08878e64(void *,void *); void FUN_088ef994(void *,u32);
void FUN_088a218c(void *context,u8 *object)
{
    void *r=FIELD(object,void *,0x2ec); void **m=*(void ***)object; u8 *child;
    if(r){ FUN_08878e64(context,r); if(FIELD(object,u32,0x3a8)<4)
        FUN_088ef994(D_09beb090,(FIELD(object,u32,0x3a8)+6)&0xff); }
    child=((GetChild)m[0x11])(object);
    if(FIELD(child,void *,0x58)){ child=((GetChild)m[0x11])(object); FUN_08878e64(context,FIELD(child,void *,0x58)); }
    if(FIELD(object,void *,0x314)) FUN_08878e64(context,FIELD(object,void *,0x314));
}
