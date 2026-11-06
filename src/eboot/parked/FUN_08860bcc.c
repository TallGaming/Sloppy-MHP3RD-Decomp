/* Purpose: find records at the current global index and dispatch exact matches. */
extern unsigned int D_08a29198;
extern int FUN_0882a8a4(unsigned int value);
extern void FUN_08860b14(unsigned int context, const int *record);

unsigned int FUN_08860bcc(unsigned int context, const void *owner)
{
    int index = FUN_0882a8a4(D_08a29198) << 1;
    int *record = *(int **)((const unsigned char *)owner + 0x10);
    if (index >= 0 && record != 0 && record[0] != -1) {
        do {
            if (index < record[0])
                return 0;
            if (index == record[0])
                FUN_08860b14(context, record);
            record += 3;
        } while (record[0] != -1);
    }
    return 0;
}
