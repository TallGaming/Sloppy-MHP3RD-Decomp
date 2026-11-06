/* Purpose: substitute each byte of a buffer and XOR every word with a generated key. */
extern unsigned char DAT_089a9a48[];
extern unsigned int FUN_08862700(void *);

void FUN_0886278c(void *generator, unsigned int *buffer, int size)
{
    int processed;

    for (processed = 0; processed < size; processed += 4) {
        unsigned char *bytes = (unsigned char *)buffer;
        unsigned int value;
        bytes[0] = DAT_089a9a48[bytes[0]];
        bytes[1] = DAT_089a9a48[bytes[1]];
        bytes[2] = DAT_089a9a48[bytes[2]];
        bytes[3] = DAT_089a9a48[bytes[3]];
        value = *buffer;
        *buffer = value ^ FUN_08862700(generator);
        buffer++;
    }
}
