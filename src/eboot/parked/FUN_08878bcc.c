/* Purpose: initialize an allocator record and link it into its owner. */
void FUN_08878bcc(unsigned int *owner)
{
    unsigned int *record = (unsigned int *)owner[1];
    record[0] = 0;
    record[1] = 0;
    record[2] = 0;
    record[3] = 0;
    record[4] = 2;
    record[6] = 0;
    owner[4] = (unsigned int)record;
    record[5] = (owner[0] - 0x20) >> 4;
}
