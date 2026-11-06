/*
 * FUN_0890de68: advance a three-state record and initialize its subrecord when ready.
 *
 * Main EBOOT, attempt-high-01. Names, state meanings and call signatures are hypotheses.
 */

typedef unsigned char u8;

extern void *D_09bee670;
extern void *D_09bb7e78;
void FUN_0890dbe4();
void FUN_0890d550();
int FUN_08921e84(void *manager);
void FUN_088c926c(void *queue, int a, int b, int c, int d,
                  int e, int f, int g, int h, int i);
void FUN_088f9ce4(void *subrecord, int value);
void FUN_08902688(void *subrecord, int value);

void FUN_0890de68(u8 *record)
{
    char state = record[2];

    if (state == 1) {
        FUN_0890dbe4();
        return;
    }
    if (state == 0) {
        if (FUN_08921e84(D_09bee670) == 0) {
            record[3] = 0;
            record[2]++;
            FUN_088c926c(D_09bb7e78, 0, 4, 0, 5, -1, -1, 0, 0, 0);
            FUN_088f9ce4(record + 0x21c, 0);
            FUN_08902688(record + 0x21c, 1);
            FUN_0890dbe4(record);
        }
        return;
    }
    if (state == 2)
        FUN_0890d550();
}
