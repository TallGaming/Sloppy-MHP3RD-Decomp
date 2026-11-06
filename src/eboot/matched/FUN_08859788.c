/*
 * Purpose: return a record field when the subsystem is ready, otherwise an
 * error code.
 * Hypothesis: readiness is represented by status value one.
 */
extern int FUN_08858f5c(void);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08859788(const void *record)
{
    int status = FUN_08858f5c();
    unsigned int result = 0x80000006;
    if (status == 1) {
        result = FIELD(record, unsigned int, 0x10);
    }
    return result;
}
