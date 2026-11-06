/* Purpose: submit two related visual records after selecting their indexed asset. */
extern void *D_09beb0bc;
extern unsigned int DAT_089c6dd0[];
extern unsigned int DAT_089c6df4[];
extern float DAT_089c6dec;
extern float DAT_089c6e10;
extern unsigned char DAT_089c710c[];
extern unsigned char DAT_089c7118[];
extern unsigned char DAT_089c7124[];
extern void FUN_08900bf0(void *, void *, void *, int, int, int, int, int);

void FUN_0886515c(float offset, unsigned char *state, int index)
{
    unsigned int first[9];
    unsigned int second[9];
    unsigned char *selection = (*(unsigned int *)(state + 0x29788) & 8) ? DAT_089c7118 : DAT_089c7124;
    int item;

    for (item = 0; item < 9; item++)
        first[item] = DAT_089c6dd0[item];
    ((float *)first)[7] = DAT_089c6dec + offset;
    FUN_08900bf0(D_09beb0bc, first, (void *)(0x089c6d64 + selection[index] * 0x24), 1, 0, 0, 0, 0);
    for (item = 0; item < 9; item++)
        second[item] = DAT_089c6df4[item];
    ((short *)second)[0] = DAT_089c710c[index] + 1;
    ((short *)second)[2] = DAT_089c710c[index] + 0x18;
    ((float *)second)[7] = DAT_089c6e10 + offset;
    FUN_08900bf0(D_09beb0bc, second, (void *)(0x089c6d64 + selection[index] * 0x24), 1, 0, 0, 0, 0);
}
