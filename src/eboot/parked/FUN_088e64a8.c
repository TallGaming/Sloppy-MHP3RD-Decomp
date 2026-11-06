/*
 * FUN_088e64a8: register a 16-bit value with an indexed resource and remember it.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: interface dispatch retains broad allocation and call differences.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef void *(*Resolve)(void *, u16);
extern void *D_08a3387c;
void FUN_08915200(void *, void *);
void FUN_08960c80(void);

void FUN_088e64a8(u8 *record, u16 value, int index)
{
    void *resource = ((void **)0x08a1be90)[index];
    Resolve resolve = *(Resolve *)((u8 *)*(void **)D_08a3387c + 0x14);
    void *result = resolve(D_08a3387c, value);

    FUN_08915200(resource, result);
    ((u16 *)(record + 0x10fa358))[index] = value;
    FUN_08960c80();
}
