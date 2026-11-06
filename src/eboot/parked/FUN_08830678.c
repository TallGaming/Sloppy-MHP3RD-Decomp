/* Purpose: process each node in a linked list into successive output slots. */
extern void FUN_088305dc(void *output, void *node_data);

unsigned int FUN_08830678(unsigned char *output, unsigned int *node)
{
    for (; node != 0; node = (unsigned int *)node[0]) {
        FUN_088305dc(output, node + 0x21);
        output += 8;
    }
    return 0;
}
