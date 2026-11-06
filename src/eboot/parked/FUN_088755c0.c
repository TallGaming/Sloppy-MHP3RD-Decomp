/* Purpose: report whether a pointed word is nonzero to a global subsystem. */
extern unsigned int D_09beb0bc[];
extern void FUN_088ef960(unsigned int context, unsigned int enabled);

void FUN_088755c0(const int *value)
{
    FUN_088ef960(D_09beb0bc[-11], *value != 0);
}
