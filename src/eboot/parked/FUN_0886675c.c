/* Purpose: classify a value against thresholds and format a scaled amount. */
extern unsigned short D_089c734c[];
extern float D_089c7510[];
extern float D_08966540;
extern float D_08966544;
extern float D_08966548;

void FUN_0886675c(int unused, unsigned int index, unsigned short value,
                  unsigned char *output, unsigned char mode)
{
    unsigned short *limits = D_089c734c + (index & 0xff) * 3;
    unsigned int scaled;
    unsigned int rounded;

    (void)unused;
    if (limits[0] == 0 || limits[1] == 0 || limits[2] == 0) {
        output[0] = 4;
    } else if (value >= limits[0] && mode < 2) {
        output[0] = 1;
    } else if (value < limits[0] && mode < 2 && value >= limits[1]) {
        output[0] = 2;
    } else if (value <= limits[2] && (mode == 0 || mode == 2)) {
        output[0] = 3;
    } else {
        output[0] = 0;
    }

    scaled = (unsigned int)(D_089c7510[index & 0xff] * D_08966540);
    rounded = (unsigned int)(((float)scaled * (float)value) / D_08966548) + 5;
    *(short *)(output + 2) = rounded / 1000;
    *(short *)(output + 4) = (rounded % 1000) / 10;
}
