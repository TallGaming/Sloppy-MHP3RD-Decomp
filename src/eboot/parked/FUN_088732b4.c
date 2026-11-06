/* Purpose: initialize a controller object and clear the subsystem active bit. */
extern void *D_08aace80;
extern void FUN_0895bb3c(void *field);
#define FIELD(b,t,o) (*(t *)((unsigned char *)(b) + (o)))
void FUN_088732b4(unsigned int *object)
{
    object[2] = 1; object[1] = 0x0c; object[0] = 0x0896a9a0;
    object[5] = 0; *(void **)0x08aacea4 = object;
    FUN_0895bb3c(object + 0x30); object[0x1c] = 0;
    FIELD(object, unsigned char, 0xad) = 0;
    FIELD(D_08aace80, unsigned int, 0x60474) &= 0xfffffffe;
}
