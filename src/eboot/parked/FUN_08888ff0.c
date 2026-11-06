/* Purpose: apply the result of a peer-session request and refresh live state. */
extern void FUN_08888074(void *, int);
extern void FUN_08888210(void *, int);
extern void FUN_08835328(void *);
extern void FUN_088882e0(void *, void *);
extern void FUN_08886684(void *, void *);
extern void FUN_08888144(void *, unsigned char);
extern void FUN_08888824(void *);

void FUN_08888ff0(unsigned char *request)
{
    unsigned char *state = *(unsigned char **)(request + 8);
    char enabled = (char)*(int *)(request + 0xc);
    unsigned int status = *(unsigned int *)(request + 0x10) & 0xffff;
    unsigned char workspace[238];
    unsigned char *first = workspace;
    unsigned char *second = workspace + 144;

    *(unsigned int *)(state + 0x1bb8) &= ~0x80U;
    *(unsigned char *)(state + 0x24e4) = enabled == 0;
    *(unsigned int *)(state + 0x24e8) = status;
    if (enabled == 0) {
        FUN_08888074(state, 3);
        FUN_08888210(state, 1);
        FUN_08835328(first);
        FUN_088882e0(state, first);
        FUN_08835328(second);
        FUN_08886684(state, second);
        FUN_08888144(state, workspace[237]);
        FUN_08888824(state);
    } else if (status == 0x8003) {
        state[0x24ec] = 1;
    }
}
