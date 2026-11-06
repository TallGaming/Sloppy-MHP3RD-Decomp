/* Purpose: dispatch four command types to one of two range handlers. */
extern unsigned char D_08a333c4[];
extern void FUN_08861ea0(unsigned int context, unsigned int value, unsigned int mode);
extern void FUN_08861e5c(unsigned int context, unsigned int value, unsigned int mode);

void FUN_08860b14(unsigned int unused, const unsigned int *command)
{
    unsigned int context = *(unsigned int *)(D_08a333c4 + 0xa0);
    unsigned int value = command[2] >> 1;
    (void)unused;
    switch (command[1]) {
    case 1: FUN_08861ea0(context, value, 0); break;
    case 2: FUN_08861ea0(context, value, 1); break;
    case 3: FUN_08861e5c(context, value, 0); break;
    case 4: FUN_08861e5c(context, value, 1); break;
    }
}
