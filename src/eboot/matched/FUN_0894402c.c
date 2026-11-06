/*
 * FUN_0894402c: clamp a record half-word to 99 and then to the current global limit.
 *
 * Main EBOOT, attempt-high-01 batch 3. The limit and field roles are hypotheses.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;

int FUN_08943fb0();

int FUN_0894402c(void *unused, u8 *record)
{
    int value = *(s16 *)(record + 2);
    int limit;

    if (value > 99)
        value = 99;
    limit = FUN_08943fb0();
    if (limit < value)
        value = limit;
    return (s8)value;
}
