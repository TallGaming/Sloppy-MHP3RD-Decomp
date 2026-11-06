/*
 * Purpose: accept two adjacent primary states or a nonzero fallback query.
 * Hypothesis: the shared object pointer is the word at runtime address
 * 0x09bb7b60; a named symbol is not yet present in source/eboot/symbols.s.
 */
extern int FUN_088bdfa0(void *object);
extern int FUN_088be55c(void *object);

#define SHARED_OBJECT (*(void *volatile *)0x09bb7b60)

unsigned int FUN_08921e84(void)
{
    int state = FUN_088bdfa0(SHARED_OBJECT);
    if ((unsigned int)(state - 8) < 2 || FUN_088be55c(SHARED_OBJECT) != 0) {
        return 1;
    }
    return 0;
}
