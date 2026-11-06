/* Purpose: wait until a global byte flag becomes nonzero. */
extern volatile unsigned char D_08aaceb4;

void FUN_0887548c(void)
{
    do {
    } while (D_08aaceb4 == 0);
}
