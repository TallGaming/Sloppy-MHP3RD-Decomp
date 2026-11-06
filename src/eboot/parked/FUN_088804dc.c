/* Purpose: update one transform channel throughout a sibling/child hierarchy. */
extern void FUN_0889ef0c(void *, int);
extern void FUN_0889ed0c(void *);

void FUN_088804dc(float frame, unsigned char *node, char alternate)
{
    unsigned int *source;
    unsigned int *destination;
    unsigned char *transform;
    int frame_index = (short)(int)frame;

    do {
        source = (unsigned int *)(node + 0x120);
        transform = node + (alternate != 0 ? 0x1e0 : 0x150);
        destination = (unsigned int *)(transform + 0x60);
        destination[0] = source[0];
        destination[1] = source[1];
        destination[2] = source[2];
        destination[3] = source[3];
        destination[4] = source[4];
        destination[5] = source[5];
        destination[6] = source[6];
        destination[7] = source[7];
        destination[8] = source[8];

        FUN_0889ef0c(transform, frame_index);
        FUN_0889ed0c(transform);
        if (*(unsigned char **)(node + 0x14c) != 0)
            FUN_088804dc(frame, *(unsigned char **)(node + 0x14c), alternate);
        node = *(unsigned char **)(node + 0x148);
    } while (node != 0);
}
