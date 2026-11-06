/* Purpose: test direct and prerequisite groups for a table-selected condition. */
extern unsigned char *D_08aace80;
extern void *D_09bb7a80;
extern unsigned char D_089ca350[];
extern unsigned char D_089caaf8[];
extern void *FUN_088b51b8(void *, unsigned char, ...);
extern int FUN_0887dc6c(int, void *, const void *, unsigned char);

static int condition_matches(int context, const unsigned char *condition,
                             unsigned char option, int mode)
{
    if (mode == 0) {
        void *player = FUN_088b51b8(D_09bb7a80, D_08aace80[0x26], 1);
        return FUN_0887dc6c(context, player, condition, option) != 0;
    }
    if (mode == 1) return 1;
    return mode == -1 && ((condition[7] ^ 1) & 1) != 0;
}

int FUN_08880258(int context, short group, unsigned char option, int mode)
{
    int count = D_089ca350[group * 2];
    const unsigned char *condition = D_089caaf8 + D_089ca350[group * 2 + 1] * 10;
    int i;
    int j;
    for (i = 0; i < count; i++, condition += 10)
        if (condition_matches(context, condition, option, mode)) return 1;
    for (i = 0; i < group; i++) {
        count = D_089ca350[i * 2];
        condition = D_089caaf8 + D_089ca350[i * 2 + 1] * 10;
        for (j = 0; j < count; j++, condition += 10) {
            if (*(short *)condition == group &&
                condition_matches(context, condition, option, mode)) return 1;
        }
    }
    return 0;
}
