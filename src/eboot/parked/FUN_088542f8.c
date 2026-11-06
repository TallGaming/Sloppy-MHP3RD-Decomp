/* Purpose: update a global mode and notify its byte-valued handler. */
extern unsigned char D_0897d5f8[];
extern void thunk_FUN_08859ff8(unsigned char value);

#define MODE (*(int *)(D_0897d5f8 - 0x164))

void FUN_088542f8(int mode)
{
    if (mode == 1 || mode == 2) {
        MODE = mode;
        thunk_FUN_08859ff8(0);
        return;
    }
    if (mode == 0) {
        MODE = 0;
        thunk_FUN_08859ff8(1);
    }
}
