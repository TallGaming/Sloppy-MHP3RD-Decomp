/* Purpose: advance two modular pseudo-random seeds and combine their new values. */
int FUN_0888dea8(unsigned char *object)
{
    unsigned int first = (*(int *)(object + 0x2564) * 0x215fU) % 0xff8fU;
    unsigned int second = (*(int *)(object + 0x2568) * 0xdfa3U) % 0xffefU;

    *(unsigned int *)(object + 0x2568) = second;
    *(unsigned int *)(object + 0x2564) = first;
    return second * 0x10000 + first;
}
