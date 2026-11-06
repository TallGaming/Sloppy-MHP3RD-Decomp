/* Purpose: rebuild six output slots from up to twenty-five mode-16 records. */
extern void FUN_08869f34(void);
extern void FUN_08908000(int index, void *record);
extern int FUN_0890681c(void *record, int mode);
void FUN_0886a07c(void *object)
{
    unsigned char *record; int scanned, output, i;
    FUN_08869f34();
    for (i = 0; i < 6; i++) FUN_08908000(i, 0);
    scanned = 0; output = 0; record = (unsigned char *)object + 0x5daec;
    do {
        while (1) {
            int accepted = FUN_0890681c(record, 0x10);
            scanned++;
            if (accepted != 0) break;
            record += 0xa0;
            if (scanned == 0x19) return;
        }
        FUN_08908000(output, record);
        record += 0xa0; output++;
    } while (scanned != 0x19);
}
