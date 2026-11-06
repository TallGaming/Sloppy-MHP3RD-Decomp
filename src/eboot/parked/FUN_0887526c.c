/* Purpose: rebuild nineteen command-packet pointers and their terminator. */
void FUN_0887526c(int *object)
{
    unsigned int *packet = (unsigned int *)(object + object[0] * 0x28 + 1);
    int index;
    for (index = 0; index < 0x13; index++) {
        unsigned int *next = packet + 2;
        object[0x51 + index] = (int)packet;
        packet[0] = ((unsigned int)next & 0xff000000) >> 8 | 0x10000000;
        packet[1] = ((unsigned int)next & 0xffffff) | 0x08000000;
        packet = next;
    }
    object[100] = (int)packet; packet[0] = 0x10080000;
    packet[-1] = 0x089c9d14;
}
