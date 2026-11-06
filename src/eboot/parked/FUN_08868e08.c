/* Purpose: normalize a small category byte, using five as the fallback. */
unsigned int FUN_08868e08(unsigned int unused, unsigned char category)
{
    unsigned int result = 5;
    (void)unused;
    switch (category) {
    case 0: return 0;
    case 1: return 1;
    case 2: return 2;
    case 3: result = 3; break;
    case 4: return 4;
    }
    return result;
}
