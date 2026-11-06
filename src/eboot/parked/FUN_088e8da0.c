/*
 * FUN_088e8da0: initialize nine fixed-size work buffers and related state.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: exact instruction count retains nine loop/call differences.
 */
typedef unsigned char u8;
void FUN_088e6e28(int);
void FUN_088e6e98(int);
void FUN_088e6f58(int);
void FUN_088e8d90(int);

void FUN_088e8da0(int record)
{
    int offset = 0;
    int buffer = record + 0x298;
    int slot = record;

    do {
        offset += 0xc00;
        *(int *)(slot + 0x144) = buffer;
        buffer += 0xc00;
        slot += 4;
    } while (offset != 0x5400);
    *(u8 *)(record + 0x130) = 0;
    FUN_088e6e28(record);
    FUN_088e6e98(record);
    FUN_088e6f58(record);
    FUN_088e8d90(record);
}
