/* Purpose: initialize a render-state block for one of the built-in modes. */
extern unsigned char D_089cfc08[];
extern unsigned char D_089cfc30[];
extern unsigned char D_089cfc58[];
extern unsigned char D_089cfc80[];
extern unsigned char *D_08a29198;
extern void FUN_0880c468(void *, int, int);
extern void FUN_08883f0c(void *, void *, int, int);

void FUN_08884788(unsigned char *state, short mode)
{
    unsigned int *source;
    unsigned int *destination;

    FUN_0880c468(state, 0, 0x90);
    if (mode == -3 || mode == -2) {
        *(void **)(state + 0x98) = mode == -3 ? D_089cfc58 : D_089cfc30;
        source = (unsigned int *)(D_08a29198 + 0x1000);
        destination = (unsigned int *)(state + 0x30);
        destination[0] = source[0];
        destination[1] = source[1];
        destination[2] = source[2];
        destination[3] = source[3];
    } else if (mode == -4) {
        *(void **)(state + 0x98) = D_089cfc80;
    } else if (mode == -1) {
        *(void **)(state + 0x98) = D_089cfc08;
    } else {
        *(void **)(state + 0x98) = 0;
    }
    FUN_08883f0c(state, state + 0x10, 0, 0);
}
