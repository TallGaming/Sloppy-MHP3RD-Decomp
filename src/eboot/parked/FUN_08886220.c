/* Purpose: initialize the active network object when the request selects a fresh session. */
extern void thunk_FUN_0880c468(void *, int, unsigned int);
extern void FUN_0883592c(void *, void *);
extern void FUN_0888619c(void *);

void FUN_08886220(unsigned char *request)
{
    unsigned char *object = *(unsigned char **)(request + 8);
    unsigned char fresh = *(unsigned int *)(request + 12);

    object[0x2558] = 0;
    if (fresh == 0) {
        thunk_FUN_0880c468(object + 0x2e8, 0, 0x530);
        FUN_0883592c(object + 0x17ad, object + 0x2e8);
        FUN_0888619c(object);
    }
}
