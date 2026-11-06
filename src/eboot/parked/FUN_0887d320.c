/* Purpose: initialize a small runtime object and install its completion hook. */
extern int D_09bc1ed8;
extern int D_08aace80;
extern int D_09bb7a60;
extern unsigned char *D_09be9f20;
extern void *D_08a33464;
extern void *D_0896a938;
extern void FUN_08960f38(void *);
extern void FUN_088e62ac(int, unsigned char);
extern void FUN_0886a33c(int, int);
extern void FUN_0886ccec(int);
extern void FUN_088a3060(int);
extern int FUN_08878c28(void *, int, int);
extern void *FUN_08826c28(int, int);
extern void FUN_0887d308(void);

void FUN_0887d320(unsigned char *state)
{
    unsigned char local[12];
    unsigned char *owner = D_09be9f20;
    int memory;
    unsigned int *object;

    FUN_08960f38(local);
    FUN_088e62ac(D_09bc1ed8, local[10]);
    FUN_0886a33c(D_08aace80, 1);
    FUN_0886ccec(D_08aace80);
    FUN_088a3060(D_09bb7a60);
    memory = FUN_08878c28(owner + 0x14010, 0x30, 0x10);
    if (memory != 0) {
        object = FUN_08826c28(0x30, memory);
        object[2] = 1;
        object[1] = 12;
        D_08a33464 = object;
        *(unsigned int **)(owner + 8) = object;
        *((unsigned char *)object + 12) = 2;
        object[0] = (unsigned int)&D_0896a938;
        object[4] = 11;
        *((unsigned char *)object + 13) = 2;
        *((unsigned char *)object + 14) = 0;
        object[5] = 0;
    }
    *(void (**)(void))(state + 4) = FUN_0887d308;
    *(int *)(state + 8) = 0;
    *(int *)(state + 0x18) = 0;
}
