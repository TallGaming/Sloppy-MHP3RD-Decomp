/* Purpose: initialize the global player-state block and its indexed subrecords. */
extern unsigned char *D_08aace80;
extern void FUN_08906304(void *);
extern void FUN_0880c468(void *, int, int);

void FUN_088724fc(unsigned char *state)
{
    unsigned char *entry;
    int i;
    int j;

    D_08aace80 = state;
    entry = state + 0x5d4a8;
    for (i = 0; i < 10; i++, entry += 0xa0)
        FUN_08906304(entry);
    entry = state + 0x5daec;
    for (i = 0; i < 25; i++, entry += 0xa0)
        FUN_08906304(entry);
    *(int *)(state + 0x5fbf4) = 0;
    *(int *)(state + 0x5fbf8) = 0;
    entry = state + 0x5fbfc;
    for (i = 0; i < 10; i++, entry += 0xa0)
        FUN_08906304(entry);
    *(int *)(state + 0x6049c) = 0;
    *(int *)(state + 0x604a0) = 0;
    entry = state + 0x604a4;
    for (i = 0; i < 10; i++, entry += 0xa0)
        FUN_08906304(entry);

    *(unsigned short *)(state + 0x60472) = 0;
    *(unsigned short *)(state + 0x1e) = 0xffff;
    *(int *)(state + 0x60474) = 0;
    state[0x26] = 0;
    state[0x6bc] = 0;
    *(int *)(state + 0x714) = 0;
    FUN_0880c468(state + 0x85c, 0, 0x5f378);

    entry = state + 0x53d0;
    for (i = 0; i < 45; i++, entry += 0x5c) {
        *(unsigned short *)(entry + 0x1a) = 0xffff;
        for (j = 0; j < 5; j++)
            *(unsigned short *)(entry + 0x1c + j * 2) = 0xffff;
        *(unsigned short *)(entry + 0x26) = 0xffff;
    }
    for (i = 0; i < 6; i++)
        state[0x30 + i * 0xfc] = 0;
    state[0x60478] = 0xff;
    FUN_0880c468(state + 0x5fbe4, 0, 0x6f8);
    state[0x60b84] = 0x18;
    state[0x718] = 0;
    state[0x6047b] = 0;
    state[0x29] = 0;
    state[0x2a] = 0;
    state[0x6047a] = 0;
    state[0x6047c] = 0;
    state[0x6042e] = 0;
    state[0x6042f] = 0;
    state[0x60430] = 0;
    for (i = 0; i < 0x75; i++)
        state[0x7e5 + i] = i;
    state[0x60470] = 0;
}

