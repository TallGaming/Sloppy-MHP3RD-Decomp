/*
 * Purpose: report whether any of three spaced halfword fields is populated.
 */
typedef unsigned char u8;
typedef unsigned short u16;
extern const u16 *FUN_0885fa60(void *context, u8 category, u16 key);

int FUN_0885fb04(void *context, u8 category, u16 key)
{
    const u16 *values = FUN_0885fa60(context, category, key);

    unsigned slot;

    if (!values)
        return 0;
    for (slot = 0; slot < 3; ++slot) {
        if (values[2 * slot])
            return 1;
    }
    return 0;
}

