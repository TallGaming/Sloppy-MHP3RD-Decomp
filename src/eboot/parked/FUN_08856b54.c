/* Purpose: append a command and four indexed table words to a global stream. */
extern unsigned int *D_08a31e88;
extern unsigned int D_0897d5f8[];

void FUN_08856b54(unsigned int unused, unsigned int index)
{
    unsigned int *output = D_08a31e88;
    unsigned int table_index = (index & 0x3f) * 4;
    (void)unused;
    output[0] = 0x20000001;
    D_08a31e88 = output + 5;
    output[1] = D_0897d5f8[table_index + 0];
    output[2] = D_0897d5f8[table_index + 1];
    output[3] = D_0897d5f8[table_index + 2];
    output[4] = D_0897d5f8[table_index + 3];
}
