/* Purpose: allocate scratch space, decompress into the caller buffer, then release it. */
extern unsigned char *D_09bb7bc4;
extern int FUN_08878c28(void *, int, int);
extern void FUN_08878e64(void *, ...);
extern void FUN_0880c088(void *, const void *, int);
extern int FUN_0886e130(int);
extern int FUN_08961328(void *, int, int *, int);

int FUN_0886e19c(int context, unsigned char *buffer, int length, unsigned char *status)
{
    unsigned char *owner = D_09bb7bc4;
    int allocation = FUN_08878c28(owner + 4, length + 0x40, 0x10);
    int output_length = 0;
    unsigned int scratch;
    int i;

    if (allocation != 0) {
        for (i = 0; i < 0x100; i++) {
            int *entry = (int *)(owner + 0x843130 + i * 12);
            if (entry[0] == -1) {
                entry[0] = 0x15;
                entry[1] = allocation;
                entry[2] = length + 0x40;
                break;
            }
        }
        if (i == 0x100) {
            FUN_08878e64(owner + 4);
            allocation = 0;
        }
    }
    scratch = (allocation + 0x3fU) & ~0x3fU;
    FUN_0880c088((void *)scratch, buffer, length);
    *status = FUN_08961328((void *)scratch, length, &output_length,
                          FUN_0886e130(context)) == 0 ? 0 : 0xff;
    FUN_0880c088(buffer, (void *)scratch, output_length);
    for (i = 0; i < *(int *)(owner + 0x843d30); i++) {
        int *entry = (int *)(owner + 0x843130 + i * 12);
        if (entry[0] == 0x15) {
            FUN_08878e64(owner + 4, entry[1]);
            entry[0] = -1;
        }
    }
    return output_length;
}
