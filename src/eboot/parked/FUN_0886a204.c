/* Purpose: populate at most five outputs from twenty-five initialized records. */
extern void FUN_08908000(int index, void *record);
extern int FUN_08906550(void *record);
void FUN_0886a204(void *object)
{
    unsigned char *record; int scanned, output, i;
    for (i = 0; i < 6; i++) FUN_08908000(i, 0);
    scanned = 0; output = 0; record = (unsigned char *)object + 0x5daec;
    do {
        int next = output;
        if (FUN_08906550(record) != 0) {
            next = output + 1;
            FUN_08908000(output, record);
            if (next > 4) return;
        }
        scanned++; record += 0xa0; output = next;
    } while (scanned != 0x19);
}
