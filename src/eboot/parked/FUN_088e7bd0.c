/*
 * FUN_088e7bd0: map the current display mode to its command byte.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: compiler switch lowering remains longer and differently shaped.
 */
typedef unsigned char u8;

u8 FUN_088e7bd0(u8 *record)
{
    u8 result = 0;

    switch (record[0x165]) {
    case 0: return 0x0b;
    case 1: return 0x0c;
    case 2: return 0x0d;
    case 3: return 0x0e;
    case 4: return 0x0f;
    case 5: result = 0x10; break;
    case 6: return 0x12;
    }
    return result;
}
