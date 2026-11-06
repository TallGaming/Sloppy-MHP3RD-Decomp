/*
 * Purpose: initialize a state object and its embedded helper at offset 40.
 * Hypothesis: the first word is a method-table pointer.
 */
extern unsigned char PTR_FUN_0896a8f0[];
extern void FUN_088f9cd0(void *helper);

void FUN_08856188(unsigned int *object)
{
    object[2] = 1;
    object[1] = 12;
    object[0] = (unsigned int)PTR_FUN_0896a8f0;
    object[5] = 0;
    FUN_088f9cd0(object + 10);
    object[7] = 0;
    object[6] = 0;
}
