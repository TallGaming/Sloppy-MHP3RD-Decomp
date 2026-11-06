/* Count the four game packet records whose six-byte key is set. */
typedef struct PacketRecord {
    signed char key[6];
    unsigned char reserved[0x146];
} PacketRecord;

extern PacketRecord D_08a29258[4];
extern int FUN_08830550(const signed char *values);

int FUN_0882f240(void)
{
    int count = 0;
    int i;

    for (i = 0; i < 4; ++i) {
        if (FUN_08830550(D_08a29258[i].key))
            ++count;
    }
    return count;
}
