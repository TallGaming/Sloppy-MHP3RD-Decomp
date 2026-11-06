/* Purpose: enqueue a compact event and advance the ring to the next empty slot. */
typedef void (*EventFn)(void *, unsigned short, unsigned int, unsigned int, unsigned int, int);

void FUN_0886247c(int *object, unsigned int *event)
{
    int adjusted = (int)event[4] + 0x1ffff;
    unsigned int slot;
    unsigned short kind = (unsigned short)(event[0] >> 16);
    EventFn emit;
    int count;

    if (adjusted < 0)
        adjusted = (int)event[4] + 0x3fffe;
    slot = (object[0x423] - ((adjusted >> 17) - 1)) & 0x7f;
    emit = *(EventFn *)(*(unsigned char **)object + 0x30);
    *(unsigned short *)event = 0;
    object[0x424] = slot;
    object[0x423] = slot;
    emit(object, kind, event[1], event[6] & 0xff, event[5], 0);
    for (count = 1; count != 0x80; count++) {
        if ((short)object[object[0x424] * 8 + 0x23] == 0)
            return;
        object[0x424] = (object[0x424] + 1U) & 0x7f;
    }
    object[0x424] = (object[0x423] - 1U) & 0x7f;
}
