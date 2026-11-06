/* Purpose: initialize a named resource block and normalize its display text. */
extern unsigned char *D_09bb7a7c;
extern void FUN_0880c468(void *, int, int);
extern void FUN_0880ea5c(void *, const void *, int);
extern void FUN_0888d444_normalize_name(unsigned char *);
extern void FUN_08960fa8(void *);

void FUN_0888d444(unsigned char *state, const void *name)
{
    unsigned char *resource = state + 0x688;
    unsigned char *text = state + 0x6c4;

    FUN_0880c468(resource, 0, 0x2c4);
    *(int *)(state + 0x688) = 0x2c4;
    *(int *)(state + 0x694) = 0x32;
    *(int *)(state + 0x698) = 0x34;
    *(int *)(state + 0x69c) = 0x33;
    *(int *)(state + 0x6a0) = 0x29;
    *(int *)(state + 0x6bc) = 1;
    *(int *)(state + 0x8c4) = 0;
    FUN_0880ea5c(text, name, 0x1ff);
    FUN_0888d444_normalize_name(text);
    FUN_08960fa8(resource);
    state[0x1451] = 1;
    D_09bb7a7c[0x1e] = 1;
}
