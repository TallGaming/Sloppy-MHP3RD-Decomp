/* Purpose: normalize category bytes one through four, rejecting all others. */
unsigned int FUN_0886910c(unsigned int unused, unsigned char category)
{
    unsigned int result = 2;
    (void)unused;
    if (category != 2) {
        if (category < 3) {
            if (category == 1)
                return 1;
        } else {
            if (category == 3)
                return 3;
            if (category == 4)
                return 4;
        }
        result = 0;
    }
    return result;
}
