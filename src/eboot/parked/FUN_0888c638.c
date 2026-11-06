/* Purpose: initialize or shut down the process-wide game service subsystem. */
extern void *D_08aaceb8;
extern void *D_09bc1ed8;
extern void *D_09be9f20;
extern void *D_09ba7a7c;
extern void *D_08a3387c;
extern void *D_09beb090;
extern unsigned char D_08a34680[];
extern unsigned char D_08b24820[];
extern unsigned char D_08b24830[];
extern unsigned char D_08b44830[];
extern unsigned char D_08b48830[];
extern unsigned char D_08b4885c[];
extern unsigned char D_08b48880[];
extern unsigned char D_08b67e00[];

extern void FUN_08878c18(void *, void *, unsigned int);
extern void FUN_088c989c(void *);
extern void FUN_088a1540(void *);
extern void FUN_08856bac(void *);
extern void FUN_0882c0ac(void);
extern void FUN_08884748(void);
extern void FUN_088722bc(void);
extern void FUN_0884722c(void);
extern void FUN_088c17ac(void);
extern void FUN_08855800(void);
extern void FUN_08903660(void);
extern void FUN_088fd3b8(void);
extern void FUN_08855138(void);
extern void FUN_088f9cdc(void *);
extern void FUN_088f9fb4(void *);

static void initialize_game_services(void)
{
    unsigned int *word;

    D_08aaceb8 = D_08a34680;
    D_09bc1ed8 = D_08a34680;
    D_09be9f20 = D_08b24820;
    for (word = (unsigned int *)D_08b24820;
         word != (unsigned int *)D_08b24830; word++)
        *word = 0;

    FUN_08878c18(D_08b44830, D_08b24830, 0x14000);
    D_09ba7a7c = D_08b4885c;
    D_08a3387c = D_08b48880;
    D_09beb090 = D_08b67e00;

    FUN_088c989c(D_08b48830);
    FUN_088a1540(D_08b44830);
    FUN_08856bac(D_08b44830);
    FUN_0882c0ac();
    FUN_08884748();
    FUN_088722bc();
    FUN_0884722c();
    FUN_088c17ac();
    FUN_08855800();
    FUN_08903660();
}

static void shutdown_game_services(void)
{
    int i;

    FUN_088fd3b8();
    FUN_08855138();
    for (i = 0; i < 4; i++)
        FUN_088f9cdc(D_08b48830 + i * 80);
    for (i = 0; i < 3; i++)
        FUN_088f9fb4(D_08b44830 + i * 96);

    D_08aaceb8 = 0;
    D_09bc1ed8 = 0;
    D_09be9f20 = 0;
    D_09ba7a7c = 0;
    D_08a3387c = 0;
    D_09beb090 = 0;
}

void FUN_0888c638(int mode, unsigned short selector)
{
    if (selector != 0xffff)
        return;
    if (mode == 1)
        initialize_game_services();
    else if (mode == 0)
        shutdown_game_services();
}
