/*
 * FUN_0894ca8c: populate a colored three-entry UI choice list.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. UI roles are hypotheses.
 */
typedef unsigned char u8;
extern void *D_09be9f18, *D_09beb0bc, *D_09e5e1a8; extern int D_08a1b8d8[];
void FUN_088e6ff0(void *, int, int); void FUN_088e7048(void *, int); void FUN_08905430(void *, int, int);
int FUN_09c9aba0(void *, int); void FUN_089053a4(void *, int, int, int, int, int, int, int);
void FUN_0894ca8c(u8 *state)
{
    int i;
    FUN_088e6ff0(D_09be9f18, 14, 14);
    FUN_088e7048(D_09be9f18, 0);
    FUN_08905430(D_09beb0bc, 6, 10);
    for (i = 0; i < 3; i++) FUN_089053a4(D_09beb0bc, 3, (signed char)state[4] == i, 1, i, FUN_09c9aba0(D_09e5e1a8, i + 0xcb), D_08a1b8d8[i * 2], D_08a1b8d8[i * 2 + 1]);
}
