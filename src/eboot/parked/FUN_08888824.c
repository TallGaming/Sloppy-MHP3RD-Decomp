/* Purpose: refresh the local peer record when the network session is active. */
extern unsigned char *D_09bc1ed8;
extern unsigned char *FUN_08885024(void);
extern void FUN_08831414(void *);

void FUN_08888824(unsigned char *state)
{
    int count;
    int i;

    if ((*(unsigned int *)(D_09bc1ed8 + 0x10fa354) & 1) == 0)
        return;
    count = *(signed char *)(state + 0x17af);
    if (count > 0) {
        unsigned char *identifier = FUN_08885024();
        for (i = 0; i < count; i++) {
            unsigned char *record = state + 0x818 + i * 0x14c;
            int byte;
            for (byte = 0; byte < 6; byte++)
                if (record[byte] != identifier[byte])
                    break;
            if (byte == 6) {
                FUN_08831414(record + 0x28);
                break;
            }
        }
    }
    *(int *)(state + 0x1bc8) = 0x3c;
}
