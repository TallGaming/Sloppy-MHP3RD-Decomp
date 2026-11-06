/* Purpose: emit two fixed render-command blocks when either readiness test succeeds. */
extern unsigned char *D_08aaceb8;
extern const unsigned int D_089c_render_block_a[];
extern const unsigned int D_089c_render_block_b[];
extern int FUN_0886c70c(int, int);
extern int FUN_0886c75c(int);
extern unsigned int *FUN_0887585c(void *);
extern void FUN_088756e8(void *, unsigned int *, int, int);
extern void FUN_08875870(void *, unsigned int *);

void FUN_088718bc(int object)
{
    unsigned int *commands;
    int index;

    if (FUN_0886c70c(object, 0) != 1 && FUN_0886c75c(object) != 1)
        return;
    commands = FUN_0887585c(D_08aaceb8);
    for (index = 0; index < 8; index++)
        commands[index] = D_089c_render_block_a[index];
    FUN_088756e8(D_08aaceb8, commands, 8, 0xc);
    FUN_08875870(D_08aaceb8, commands + 8);
    commands = *(unsigned int **)(D_08aaceb8 + 0x70194);
    *(unsigned int **)(D_08aaceb8 + 0x70194) = commands + 13;
    for (index = 0; index < 13; index++)
        commands[index] = D_089c_render_block_b[index];
    FUN_088756e8(D_08aaceb8, commands + 6, 7, 0xc);
}
