/*
 * FUN_088e6de8: dispatch an indexed table value through method 0x30 of the global object.
 *
 * Main EBOOT, G2 high-address frame-and-branch slice. The interface and table types are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned short u16;

extern void *D_08a3387c;

typedef void (*Method_088e6de8)(void *, u16, void *, int, int, int);

void FUN_088e6de8(void *unused, u16 value, int index)
{
    void *table = *(void **)D_08a3387c;
    Method_088e6de8 method = *(Method_088e6de8 *)((u8 *)table + 0x30);
    void *argument = ((void **)0x08a1be90)[index];

    method(D_08a3387c, value, argument, 0, 0, 1);
}
