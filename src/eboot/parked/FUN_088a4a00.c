/* Classify the active action, including the special interaction state. */
typedef unsigned char u8; typedef unsigned int u32;
int FUN_088a49f4(void *);
int FUN_08878f8c(void *, int, int, float);
int FUN_088a4a00(u8 *object)
{
    int action, kind = 0;
    if (object[0x18c] != 4)
        return 0;
    if (object[0x18d] < 31) {
        u32 bit = 1u << object[0x18d];
        if (bit & 0x20008240) kind = 2;
        else if (bit & 0x40411000) kind = 3;
        else if (bit & 0x800) kind = 1;
    }
    action = FUN_088a49f4(object);
    if ((unsigned)(action - 1127) < 2)
        return 0;
    if (action == 1132)
        return 0;
    if (action != 1112)
        return kind;
    {
        void *child = ((void *(*)(void *))(*(void ***)object)[17])(object);
        if (!FUN_08878f8c(child, 1, 0, 0.0f))
            return 0;
        child = ((void *(*)(void *))(*(void ***)object)[17])(object);
        return *(int *)((u8 *)child + 40) == 1 ? 0 : kind;
    }
}
