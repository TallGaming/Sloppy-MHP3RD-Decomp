/* Purpose: copy the upper three-by-three portion of a four-by-four matrix. */
void FUN_08878b7c(unsigned int *output, const unsigned int *input)
{
    unsigned int first;
    unsigned int second;
    int row;

    for (row = 0; row < 3; row++) {
        first = input[row * 4 + 1];
        second = input[row * 4 + 2];
        output[row * 4] = input[row * 4];
        output[row * 4 + 1] = first;
        output[row * 4 + 2] = second;
    }
}
