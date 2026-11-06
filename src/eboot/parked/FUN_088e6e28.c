/*
 * FUN_088e6e28: reset the large 16-bit lookup table and its associated state.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains three loop/call differences.
 */
typedef unsigned char u8;
typedef unsigned short u16;
void thunk_FUN_0880c468(void *, int, int);

void FUN_088e6e28(int record)
{
    u16 *entry;
    int count = 0;

    entry = (u16 *)(record + 0x5698);
    do {
        count++;
        *entry = 0xffff;
        entry++;
    } while (count != 0xfff0);
    *(u16 *)(record + 0x160) = 0;
    thunk_FUN_0880c468((void *)(record + 0x25f78), 0, 0x480);
    *(u16 *)(record + 0x16a) = 0;
    *(u16 *)(record + 0x162) = 0;
}
