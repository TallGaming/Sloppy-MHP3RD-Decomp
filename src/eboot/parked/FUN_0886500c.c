/* Purpose: initialize a random-record pool and its allocator/semaphore state. */
extern unsigned char *D_09bc1ed8;
extern void *PTR_DAT_089c6c8c[];
extern const char s_fakeRofsSema_089664b8[];
extern int FUN_08960d20(void);
extern int FUN_08960ce0(void);
extern int FUN_08960b30(const char *, int, int, int, int);
extern unsigned int FUN_088e62f0(void *, int);

void FUN_0886500c(unsigned char *object)
{
    int base = FUN_08960d20();
    int index;

    *(int *)(object + 0x29780) = base;
    *(int *)(object + 0x29784) = base + FUN_08960ce0();
    *(int *)(object + 0x29788) = 0;
    *(int *)(object + 0x2979c) = FUN_08960b30(s_fakeRofsSema_089664b8, 0x100, 1, 1, 0);
    for (index = 0; index < 11; index++) {
        int *record = PTR_DAT_089c6c8c[(FUN_088e62f0(D_09bc1ed8, 1) % 3) * 6];
        int value = *(int *)(record[0] * 8 + record[1] - 8);
        *(int **)(object + index * 0xc + 4) = record;
        *(int *)(object + index * 0xc + 8) = value;
        *(int *)(object + index * 0xc + 0xc) = value;
    }
    *(int *)(object + 0x88) = 0;
}
