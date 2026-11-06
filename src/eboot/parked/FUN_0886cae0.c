/*
 * Purpose: return one of up to 33 four-byte slots, defaulting to slot zero.
 * Hypothesis: the slot array begins at object offset 0x603aa.
 */
int FUN_0886cae0(int object, int index)
{
    if (index > 0x20) {
        index = 0;
    }
    return object + index * 4 + 0x603aa;
}
