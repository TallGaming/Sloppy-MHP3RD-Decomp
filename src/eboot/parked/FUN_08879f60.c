/* Purpose: normalize platform network error codes to compact library errors. */
int FUN_08879f60(int error)
{
    if (error >= 0)
        return error;
    if ((unsigned int)error == 0x80010076)
        return -7;
    switch ((unsigned int)error) {
    case 0x80010004: return -14;
    case 0x80010009: return -4;
    case 0x8001000b: return -1;
    case 0x8001000c: return -12;
    case 0x80010068: return -6;
    case 0x80010069: return -12;
    case 0x8001006d: return -13;
    case 0x8001006f: return -6;
    case 0x80010072: return -7;
    case 0x80010074: return -11;
    case 0x80010075:
    case 0x80010077:
    case 0x80010078: return -7;
    case 0x80400706: return -12;
    case 0x80410701:
    case 0x80410707: return -4;
    case 0x80410709: return -1;
    case 0x8041070b:
    case 0x8041070c: return -6;
    case 0x8041070f:
    case 0x80410710: return -2;
    case 0x80410715: return -11;
    case 0x80410718: return -6;
    case 0x80410719: return -14;
    default: return -16;
    }
}
