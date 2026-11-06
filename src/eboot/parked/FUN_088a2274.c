/*
 * FUN_088a2274: release three resources referenced by an object.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: repeated virtual lookup and resource branches lower differently.
 */
typedef unsigned char u8;
#define FIELD(b,t,o) (*(t *)((u8 *)(b)+(o)))
typedef u8 *(*GetChild)(void *); void FUN_08878e64(void *,void *);
void FUN_088a2274(void *context,u8 *object)
{
    void **m=*(void ***)object; u8 *child;
    if(FIELD(object,void *,0x2ec)) FUN_08878e64(context,FIELD(object,void *,0x2ec));
    child=((GetChild)m[0x11])(object);
    if(FIELD(child,void *,0x58)){ child=((GetChild)m[0x11])(object); FUN_08878e64(context,FIELD(child,void *,0x58)); }
    if(FIELD(object,void *,0x314)) FUN_08878e64(context,FIELD(object,void *,0x314));
}
