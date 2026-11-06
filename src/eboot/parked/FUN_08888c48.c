/* Purpose: finish a connection request and record its result and status code. */
extern void FUN_08888074(void *, unsigned char);
extern void FUN_08888824(void *);

void FUN_08888c48(unsigned char *request)
{
    unsigned char *object = *(unsigned char **)(request + 8);
    unsigned char failed = *(unsigned int *)(request + 12);
    unsigned int status = *(unsigned int *)(request + 16) & 0xffff;

    *(unsigned int *)(object + 0x1bb8) &= 0xfffff7ff;
    object[0x24e4] = failed == 0;
    *(unsigned int *)(object + 0x24e8) = status;
    if (failed == 0) {
        FUN_08888074(object, 4);
        FUN_08888824(object);
    } else if (status == 0x8003 || status == 0x8007 || status == 0x8001) {
        object[0x24ec] = 1;
    }
}
