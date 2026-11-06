/* Purpose: copy two adjacent global words into an output pair. */
extern unsigned int D_08a29914[];

void FUN_0882e484(unsigned int *output)
{
    unsigned int second = D_08a29914[1];
    output[0] = D_08a29914[0];
    output[1] = second;
}
