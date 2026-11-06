/*
 * FUN_08899ec8: look up a signed periodic waveform sample.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: the sample table lacks a symbol and signed remainder lowering is shorter.
 */

typedef unsigned char u8;
typedef short s16;
typedef unsigned int u32;

extern u8 D_089d0a20;

int FUN_08899ec8(int phase)
{
    u32 angle = phase % 0x400;
    int index = angle % 0x100;

    if (angle > 0xff) {
        index = 0x200 - angle;
        if (angle > 0x1ff) {
            if (angle < 0x300) {
                return -*(s16 *)(&D_089d0a20 + (angle & 0xff) * 2);
            }
            index = 0;
            if (angle < 0x400) {
                index = -*(s16 *)(&D_089d0a20 + (0x400 - angle) * 2);
            }
            return index;
        }
    }
    return *(s16 *)(&D_089d0a20 + index * 2);
}
