/*
 * Purpose: map three command identifiers to internal operation codes.
 * Hypothesis: all other identifiers are unsupported and return zero.
 */
extern unsigned int FUN_08867cc0(unsigned int context, unsigned int operation,
                                 unsigned short value);

unsigned int FUN_08868000(unsigned int context, short command,
                          unsigned short value)
{
    unsigned int operation;
    if (command == 4) {
        operation = 11;
    } else if (command == 6) {
        operation = 13;
    } else if (command == 10) {
        operation = 21;
    } else {
        return 0;
    }
    return FUN_08867cc0(context, operation, value);
}
