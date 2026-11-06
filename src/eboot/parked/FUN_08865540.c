/* Purpose: render and advance a UI animation according to active state flags. */
extern void *D_08a31df0;
extern void *D_09beb0bc;
extern void *D_08aacea0;
extern void *D_09be9f18;
extern void FUN_08844f4c(void *, int);
extern void FUN_088fa2b0(void *, int, int);
extern void FUN_09d68218(void *);
extern void FUN_09d69834(void *);
extern void FUN_08845b98(void *, int);
extern short FUN_088e7110(void *, int);
extern void FUN_088e7018(void *, int);
extern void FUN_088e6ff0(void *, int, int);
extern void FUN_088ea5a8(void *, int, int, int, int, int, int, int);
extern void FUN_08865328(void *);

void FUN_08865540(unsigned char *state)
{
    unsigned int flags;

    if (state[0x2978c] == 0)
        return;
    flags = *(unsigned int *)(state + 0x29788);
    if ((flags & 12) == 0) {
        FUN_08844f4c(D_08a31df0, (flags & 0x13) == 0 ? 0xffff : 0xa108);
        FUN_088fa2b0(D_09beb0bc, 3, 1);
        flags = *(unsigned int *)(state + 0x29788);
    } else {
        FUN_088fa2b0(D_09beb0bc, 3, 1);
    }
    if ((flags & 1) != 0) {
        FUN_09d68218(D_08aacea0);
        FUN_09d69834(D_08aacea0);
        FUN_08845b98(D_08a31df0, 1);
        FUN_088fa2b0(D_09beb0bc, 3, 1);
        flags = *(unsigned int *)(state + 0x29788);
    }
    if ((flags & 2) != 0) {
        int selector = *(int *)(state + 0x29794);
        short offset = FUN_088e7110(D_09be9f18, selector);
        FUN_088e7018(D_09be9f18, 0);
        FUN_088e6ff0(D_09be9f18, 0x10, 0x10);
        FUN_088ea5a8(D_09be9f18, offset * -4 + 0xf0, 0x84, 1, 0, selector, 2, 2);
    }
    FUN_088fa2b0(D_09beb0bc, 6, 0);
    FUN_08865328(state);
    FUN_088fa2b0(D_09beb0bc, 3, 0);
}
