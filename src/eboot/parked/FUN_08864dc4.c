/* Purpose: remove queued records with a matching tag and advance the queue limits. */
extern int FUN_08960bb0(void);
extern void FUN_08960b88(int);
extern void FUN_08864d2c(void *, unsigned int);

void FUN_08864dc4(unsigned char *object, signed char tag)
{
    int lock = FUN_08960bb0();
    unsigned int slot = *(unsigned int *)(object + 0x108c);
    unsigned char *record = object + 0x80 + slot * 0x20;
    int count;

    if (*(short *)(record + 0xc) != 0) {
        if (record[0x24] == (unsigned char)tag && *(int **)(record + 0x20) != 0)
            **(int **)(record + 0x20) = 1;
        slot = (*(unsigned int *)(object + 0x108c) + 1) & 0x7f;
        for (count = 0; count < 0x7f; count++) {
            record = object + 0x80 + slot * 0x20;
            if (*(short *)(record + 0xc) == 0)
                break;
            if (record[0x24] == (unsigned char)tag) {
                if (*(int **)(record + 0x20) != 0)
                    **(int **)(record + 0x20) = 1;
                FUN_08864d2c(object, slot);
            } else {
                slot = (slot + 1) & 0x7f;
            }
        }
        *(unsigned int *)(object + 0x1090) = *(unsigned int *)(object + 0x108c);
        for (count = 0x7f; count != 0; count--) {
            slot = *(unsigned int *)(object + 0x1090);
            if (*(short *)(object + 0x8c + slot * 0x20) == 0)
                break;
            *(unsigned int *)(object + 0x1090) = (slot + 1) & 0x7f;
        }
    }
    FUN_08960b88(lock);
}
