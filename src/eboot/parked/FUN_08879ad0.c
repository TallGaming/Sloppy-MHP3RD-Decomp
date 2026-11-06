/* Purpose: advance two looping animation channels while honoring pause and clamp flags. */
void FUN_08879ad0(unsigned char *state)
{
    unsigned short first_flags = *(unsigned short *)(state + 0x50);
    unsigned short second_flags;
    float value;

    if ((first_flags & 2) == 0) {
        *(float *)(state + 8) = *(float *)(state + 4);
        if (*(int *)(state + 0x28) != 1 || (*(unsigned int *)(state + 0x40) & 1) != 0) {
            value = *(float *)(state + 4) + *(float *)(state + 0xc);
            *(float *)(state + 4) = value;
            if (*(float *)(state + 0x14) < value) {
                if ((first_flags & 1) == 0)
                    *(float *)(state + 4) = *(float *)(state + 0x14);
                else
                    *(float *)(state + 4) = *(float *)(state + 0x10);
            }
        }
    } else {
        *(unsigned short *)(state + 0x50) = first_flags & 0xfffd;
    }
    second_flags = *(unsigned short *)(state + 0x52);
    if ((second_flags & 2) != 0) {
        *(unsigned short *)(state + 0x52) = second_flags & 0xfffd;
        return;
    }
    if (*(int *)(state + 0x28) == 1 && (*(unsigned int *)(state + 0x40) & 4) != 0) {
        value = *(float *)(state + 0x18) + *(float *)(state + 0xc);
        *(float *)(state + 0x18) = value;
        if (*(float *)(state + 0x24) < value)
            *(float *)(state + 0x18) = (second_flags & 1) == 0 ?
                                      *(float *)(state + 0x24) : *(float *)(state + 0x20);
    }
}
