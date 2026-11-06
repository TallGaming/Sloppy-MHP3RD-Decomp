/* Purpose: expand the three input table indices into their repeated output entries. */
typedef unsigned char u8;
typedef unsigned short u16;

struct IndexInput0885e034 {
    u8 field_00[6];
    u16 indices[3];
};

extern int FUN_0885ca20(unsigned int context, unsigned int index);

int FUN_0885e034(unsigned int context, const struct IndexInput0885e034 *input,
                  u16 *output)
{
    u16 used = 0;
    int i;

    output[0] = 0;
    output[1] = 0;
    output[2] = 0;
    for (i = 0; i < 3; i++) {
        const u8 *entry = (const u8 *)FUN_0885ca20(context, input->indices[i]);
        u8 j;

        if (entry == 0)
            continue;
        for (j = 0; j < entry[0]; j++)
            output[used++] = input->indices[i];
    }
    return 0;
}
