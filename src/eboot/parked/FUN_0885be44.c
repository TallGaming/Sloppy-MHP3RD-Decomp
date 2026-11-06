/*
 * Purpose: dispatch one command byte to either the reset path or a
 * parameterized handler.
 * Hypothesis: command byte 'e' is the dedicated reset operation.
 */
extern void FUN_0885be30();
extern void FUN_0885bc0c();

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0885be44(unsigned int context, const void *command)
{
    if (FIELD(command, signed char, 1) == 'e') {
        FUN_0885be30();
    } else {
        FUN_0885bc0c(context, FIELD(command, signed char, 1),
                     FIELD(command, unsigned short, 2));
    }
}
