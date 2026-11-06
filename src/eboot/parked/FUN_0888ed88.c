/* Purpose: publish two request values, clear the checksum area, and reset checksum state. */
extern void *D_08a3387c;
extern void thunk_FUN_0880c468(void *, int, unsigned int);
extern void FUN_0888eaec(void *, int);
typedef void (*PublishFn)(void *, int, int, int, int, int);

void FUN_0888ed88(unsigned char *object)
{
    PublishFn publish = *(PublishFn *)(*(unsigned char **)D_08a3387c + 0x30);

    publish(D_08a3387c, 0xc, *(int *)(object + 0x10), 0, 0, 1);
    publish(D_08a3387c, 0xd, *(int *)(object + 0x14), 0, 0, 1);
    thunk_FUN_0880c468(*(void **)(object + 0x94c), 0, 0x121000);
    FUN_0888eaec(object, 0);
}
