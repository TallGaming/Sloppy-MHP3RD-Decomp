/* Purpose: validate a descriptor, initialize one result record, and notify externally. */
extern void *D_08aace80;
extern int FUN_0886624c(void *object, unsigned short value);
typedef void (*ExternalNotify)(unsigned int global, unsigned char a, unsigned char b);

#define EXTERNAL_NOTIFY ((ExternalNotify)0x09c7205c)
#define EXTERNAL_GLOBAL (*(unsigned int *)0x09da9600)
#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

unsigned int FUN_08860148(void *owner, void *result, unsigned short *descriptor)
{
    unsigned int status = 0xffffffff;
    if (FUN_0886624c(D_08aace80, descriptor[0]) == 0) {
        FIELD(result, unsigned char, 0) = 1;
        FIELD(result, unsigned short *, 0x14) = descriptor;
        FIELD(owner, unsigned int, 0x74) = 0;
        EXTERNAL_NOTIFY(EXTERNAL_GLOBAL,
                        FIELD(descriptor, unsigned char, 0x0d),
                        FIELD(descriptor, unsigned char, 3));
        status = 0;
    }
    return status;
}
