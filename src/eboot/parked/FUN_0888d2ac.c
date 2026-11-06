/* Purpose: validate streamed chunk boundaries against a computed size sequence. */
extern unsigned char *D_08a3387c;
extern int FUN_08862f2c(void *, int);

int FUN_0888d2ac(unsigned char *state)
{
    unsigned int chunk = 0;
    int accumulated = 0;
    int index;

    if (*(int *)(state + 0x25bc) != 3)
        return 0;
    for (index = 0; index < 0x1743; index++) {
        int size;
        if (*(unsigned int *)(state + 0x25b8) < chunk)
            return 0;
        if (FUN_08862f2c(D_08a3387c, index) == 0)
            continue;
        size = (*(int (**)(void *, int))(*(unsigned int *)D_08a3387c + 0x18))(
            D_08a3387c, index);
        accumulated += size;
        if (accumulated > 0x370000) {
            int previous = accumulated - size;
            unsigned char *entry = *(unsigned char **)(state + 0x25c4) + chunk * 0x50;
            chunk++;
            accumulated = size;
            if (*(int *)(entry + 8) != previous ||
                *(int *)(entry + 0xc) != previous >> 31)
                return 0;
        }
    }
    if (accumulated > 0) {
        unsigned char *entry = *(unsigned char **)(state + 0x25c4) + chunk * 0x50;
        if (*(int *)(entry + 8) != accumulated || *(int *)(entry + 0xc) != accumulated >> 31)
            return 0;
        chunk++;
    }
    return chunk <= *(unsigned int *)(state + 0x25b8);
}
