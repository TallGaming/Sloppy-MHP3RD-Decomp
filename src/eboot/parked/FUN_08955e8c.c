/*
 * FUN_08955e8c: flag a linked child whose identifier matches the requested value.
 *
 * Main EBOOT, attempt-high-01 medium batch 19. Node roles are hypotheses.
 */
typedef unsigned int u32;
void FUN_08955e8c(unsigned char *owner, int identifier)
{
    unsigned char *node;
    if (*(int *)(owner + 0x30) == 0) return;
    node = *(unsigned char **)(owner + 0x2c);
    while (node != 0) {
        if (*(int *)(node + 0x30) == identifier) { if ((*(u32 *)(node + 0x48) & 8) == 0) *(u32 *)(node + 0x48) |= 0x100; return; }
        node = *(unsigned char **)(node + 4);
    }
}
