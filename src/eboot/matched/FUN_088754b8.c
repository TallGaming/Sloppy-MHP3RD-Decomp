/* Purpose: clear a global flag and submit one selected record. */
extern volatile unsigned char D_08aaceb4;
extern void FUN_08960cf8(void *record, unsigned int zero1, unsigned int size,
                         unsigned int zero2);

void FUN_088754b8(unsigned int *object)
{
    D_08aaceb4 = 0;
    FUN_08960cf8(object + ((*object ^ 1) * 0x28) + 1, 0,
                 object[0x1c066], 0);
}
