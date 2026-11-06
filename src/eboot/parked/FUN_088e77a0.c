/*
 * FUN_088e77a0: accumulate the rendered width of a zero-terminated code string.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: width accumulation remains shorter and broadly different.
 */
typedef unsigned int u32;
int FUN_088e7060(void *, short);

int FUN_088e77a0(void *owner, u32 normal_width, u32 special_width, short *codes)
{
    short code = *codes;
    int width = 0;

    if (code == 0) {
        return 0;
    }
    do {
        width += FUN_088e7060(owner, code) != 0
            ? (int)((special_width & 0xff) >> 1)
            : (int)(normal_width & 0xff);
        codes++;
        code = *codes;
    } while (code != 0);
    return width;
}
