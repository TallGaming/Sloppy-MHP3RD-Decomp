/* Purpose: forward nine arguments only when the enable byte is zero. */
extern unsigned int FUN_088421b8(unsigned int context, unsigned int zero,
                                 unsigned char third, int fourth, int fifth,
                                 unsigned char sixth, unsigned char seventh,
                                 unsigned int eighth, unsigned int ninth);

unsigned int FUN_08842334(unsigned int context, signed char enabled,
                          unsigned char third, short fourth, short fifth,
                          unsigned char sixth, unsigned char seventh,
                          unsigned int eighth, unsigned int ninth)
{
    if (enabled == 0)
        return FUN_088421b8(context, 0, third, fourth, fifth, sixth, seventh,
                            eighth, ninth);
    return 0;
}
