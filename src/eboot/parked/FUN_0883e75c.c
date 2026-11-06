/*
 * Purpose: test the only natural local layout indicated by the target's
 * byte-store and sign-extension families. The fifth byte is the observed
 * result gate; the first four remain ABI inputs pending caller recovery.
 */
int FUN_0883e75c(int first, int second, int third, int fourth, int fifth)
{
    signed char values[5];

    values[0] = (signed char)first;
    values[1] = (signed char)second;
    values[2] = (signed char)third;
    values[3] = (signed char)fourth;
    values[4] = (signed char)fifth;
    return values[4] != 0;
}
