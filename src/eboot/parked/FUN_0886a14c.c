/* Purpose: select mode-four records into the first output slot. */
extern void FUN_08908000(int index, void *record);
extern int FUN_0890681c(void *record, int mode);
void FUN_0886a14c(void *object)
{
    unsigned char *record; int scanned, i;
    for (i = 0; i < 6; i++) FUN_08908000(i, 0);
    scanned = 0; record = (unsigned char *)object + 0x5daec;
    do {
        while (1) {
            int accepted = FUN_0890681c(record, 4);
            scanned++;
            if (accepted != 0) break;
            record += 0xa0;
            if (scanned == 0x19) return;
        }
        FUN_08908000(0, record);
        record += 0xa0;
    } while (scanned != 0x19);
}
