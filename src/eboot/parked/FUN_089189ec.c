/*
 * FUN_089189ec: return 1 when the selected object's word 4 is -1, otherwise 2.
 *
 * Main EBOOT, attempt-high-01. The object and result meanings are hypotheses.
 */

typedef unsigned char u8;

void *FUN_0891dc58(void);

int FUN_089189ec(void)
{
    u8 *object = FUN_0891dc58();
    int result = 1;

    if (*(int *)(object + 4) != -1)
        result = 2;
    return result;
}
