/* Purpose: choose a four-word vector record for the current global index. */
extern unsigned int D_08a29198;
extern int FUN_0882a8a4(unsigned int value);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

int *FUN_088609d0(int *output, void *object)
{
    unsigned int selector = FIELD(object, unsigned char, 1);
    int index = FUN_0882a8a4(D_08a29198);
    int *record;
    output[0] = 0;
    output[1] = 0;
    output[2] = 0;
    output[3] = 0;
    record = FIELD(object, int *, 0x18 + selector * 0x18);
    if ((index << 1) >= 0 && record != 0 && record[0] != -1) {
        do {
            if (record[0] > (index << 1))
                return output;
            output[0] = record[1];
            output[1] = record[2];
            output[2] = record[3];
            record += 4;
        } while (record[0] != -1);
    }
    return output;
}
