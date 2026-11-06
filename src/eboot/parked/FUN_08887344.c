/* Purpose: prepare a short connection payload and start its asynchronous send. */
extern void FUN_0880c468(void *, int, int);
extern void FUN_0880c088(void *, const void *, int);
extern void FUN_08835378(void *, void *, void *, void *);
extern void FUN_08888e64(void);

void FUN_08887344(unsigned char *state, char peer, const void *payload)
{
    unsigned char *buffer = state + 0x1ba0;

    *(unsigned int *)(state + 0x1bb8) |= 0x100;
    if (payload == 0)
        FUN_0880c468(buffer, 0, 0x12);
    else
        FUN_0880c088(buffer, payload, 0x12);
    *(unsigned short *)(state + 0x1bb2) = 0x12;
    FUN_08835378(state + 0x1bd4 + peer * 0x90, buffer, FUN_08888e64, state);
}
