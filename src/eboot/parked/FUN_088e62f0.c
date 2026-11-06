/*
 * FUN_088e62f0: advance one entry in a per-record 16-bit pseudo-random table.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: modular update lowering remains shorter and broadly different.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

void FUN_088e62f0(int record, int index)
{
    u32 value;

    value = *(u16 *)(index * 2 + record + 0x10fa344);
    record = index * 2 + record;

    if (value == 0) {
        *(u16 *)(record + 0x10fa344) = 0xb0;
        return;
    }
    *(short *)(record + 0x10fa344) = (short)((value * 0xb0) % 0xff53);
}
