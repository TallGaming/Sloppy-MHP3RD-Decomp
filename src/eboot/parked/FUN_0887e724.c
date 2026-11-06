/* Purpose: roll a table-driven reward and consume its two source entries. */
extern unsigned char *D_09bc1ed8;
extern signed char D_089ca130[];
extern unsigned char *D_089ca138[];
extern int FUN_0887dd58(int, int, int, int, int, int);
extern short FUN_0887e6ac(int, int, int, int);
extern unsigned int FUN_088e62f0(void *, int);
extern int FUN_088a52b0(void *, int);
extern void FUN_088acd90(void *, int, int, int);

int FUN_0887e724(int context, char *result_out, void *player,
                 short first, short second, int mode)
{
    int record = FUN_0887dd58(context, first, second, 0, mode == 1, 0);
    int result = -1;
    if (record != 0) {
        short chance = FUN_0887e6ac(context, first, second, mode);
        if ((int)(FUN_088e62f0(D_09bc1ed8, 1) % 100) < chance) {
            unsigned char kind = *(unsigned char *)(record + 5);
            result = *(short *)(record + 2);
            if (FUN_088a52b0(player, 0x87)) {
                *result_out = D_089ca130[kind];
            } else {
                unsigned char *weights = D_089ca138[kind];
                unsigned int roll = FUN_088e62f0(D_09bc1ed8, 1) % 100;
                *result_out = weights[0];
                while (roll >= weights[1]) {
                    roll -= weights[1];
                    weights++;
                    (*result_out)++;
                }
            }
        } else {
            *result_out = 0;
        }
        if (mode == 0) {
            FUN_088acd90(player, first, -1, 0);
            FUN_088acd90(player, second, -1, 0);
        }
    }
    return result;
}
