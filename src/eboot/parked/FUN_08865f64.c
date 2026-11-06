/* Purpose: allocate buffers described by the global sound-driver table. */
extern void *D_089c7130[];
extern void *FUN_08960b30(void *name, unsigned int alignment, void *size,
                         void *flags, unsigned int zero);

void FUN_08865f64(void)
{
    void **entry = D_089c7130;
    void **end = (void **)0x089c71e0;
    do {
        if (entry[0] != 0)
            entry[3] = FUN_08960b30(entry[0], 0x100, entry[1], entry[2], 0);
        entry += 4;
    } while (entry != end);
}
