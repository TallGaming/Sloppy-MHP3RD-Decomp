/*
 * Purpose: apply and clear a pending signed adjustment.
 * Hypothesis: the pending adjustment is the word at object offset 0x714.
 */
extern void FUN_088662cc(void *object, int adjustment);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0886c28c(void *object)
{
    int adjustment = FIELD(object, int, 0x714);
    if (adjustment == 0) {
        return;
    }
    FUN_088662cc(object, adjustment);
    FIELD(object, int, 0x714) = 0;
}
