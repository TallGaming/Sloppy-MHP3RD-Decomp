/* Purpose: populate a material-part block from explicit or built-in state. */
extern void *D_09bb7e90;
extern void *FUN_088ccf08(void *);

static void copy_word_bytes(unsigned char *destination,
                            const unsigned char *source)
{
    destination[0] = source[0];
    destination[1] = source[1];
    destination[2] = source[2];
    destination[3] = source[3];
}

static void copy_vectors(unsigned char *part, const unsigned char *source)
{
    *(float *)(part + 0x40) = *(const float *)(source + 0x0c);
    *(float *)(part + 0x44) = *(const float *)(source + 0x10);
    *(float *)(part + 0x48) = *(const float *)(source + 0x14);
    *(float *)(part + 0x60) = *(const float *)(source + 0x18);
    *(float *)(part + 0x64) = *(const float *)(source + 0x1c);
    *(float *)(part + 0x68) = *(const float *)(source + 0x20);
}

void FUN_08883f0c(unsigned char *record, unsigned char *part,
                  short level, unsigned short mode)
{
    const unsigned char *source = *(const unsigned char **)(record + 0x98);

    if (source != 0) {
        copy_word_bytes(part + 0x70, source + 0x00);
        copy_word_bytes(part + 0x10, source + 0x04);
        copy_word_bytes(part + 0x30, source + 0x08);
        copy_word_bytes(part + 0x50, source + 0x0c);
        copy_vectors(part, source + 4);
        return;
    }

    source = (const unsigned char *)FUN_088ccf08(D_09bb7e90);
    if (mode == 0)
        copy_word_bytes(part + 0x70, source + 0x108);
    else if (mode != 1)
        return;

    source += 0x9c + level * 0x24;
    copy_word_bytes(part + 0x10, source + 0x00);
    copy_word_bytes(part + 0x30, source + 0x04);
    copy_word_bytes(part + 0x50, source + 0x08);
    copy_vectors(part, source);
}
