/* Purpose: update graphics state only where the requested cached values changed. */
extern int D_08a33890;
extern int D_08a33894;
extern int D_08a33898;
extern int D_08a3389c;
extern int D_08a338a0;
extern int D_08a338a4;
extern int D_08a338a8;
extern void FUN_08811a74(void);
extern void FUN_08811af8(int, int);
extern void FUN_088119e0(int, int);
extern void FUN_0881194c(int, int);

void FUN_08865df0(int *state)
{
    if (D_08a33890 != state[0])
        FUN_08811a74();
    if (D_08a33894 != state[1] || D_08a33898 != state[2])
        FUN_08811af8(state[1], state[2]);
    if (D_08a3389c != state[3] || D_08a338a0 != state[4]) {
        if (state[0] == -1)
            FUN_088119e0(0, 0);
        else
            FUN_088119e0(state[3], state[4]);
    }
    if (D_08a338a4 != state[5] || D_08a338a8 != state[6])
        FUN_0881194c(state[5], state[6]);
    D_08a338a8 = state[6];
    D_08a33894 = state[1];
    D_08a33898 = state[2];
    D_08a3389c = state[3];
    D_08a338a0 = state[4];
    D_08a338a4 = state[5];
    D_08a33890 = state[0];
}
