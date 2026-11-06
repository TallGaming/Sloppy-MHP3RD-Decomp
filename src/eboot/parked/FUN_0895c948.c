/* FUN_0895c948: allocate, register and initialize a fixed-size object.
 * Main EBOOT, attempt-high-01 241-512 byte batch 24. Registry roles are hypotheses. */
int FUN_08878c28(void *, int, int); int FUN_08878d7c(void *, int, int);
void FUN_088ebb10(void *, int, int); int FUN_0889f8a8(int, int);
void FUN_09d2a080(int); void FUN_08878e64(void *, int);
int FUN_0895c948(char *owner, int tag, char alternate)
{
    int memory = alternate == 0 ? FUN_08878c28(owner + 4, 0x2f610, 0x10)
                                : FUN_08878d7c(owner + 4, 0x2f610, 0x10);
    int slot = 0; int *entry; int allocation;
    if (memory == 0) return 0;
    allocation = memory;
    FUN_088ebb10((void *)memory, 0, 0x2f610);
    entry = (int *)(owner + 0x843130);
    while (slot != 0x100 && entry[0] != -1) { slot++; entry += 3; }
    if (slot != 0x100) { entry[0] = tag + 0x16; entry[1] = memory; entry[2] = 0x2f610; }
    memory = FUN_0889f8a8(0x2f610, memory); FUN_09d2a080(memory);
    if (memory == 0) FUN_08878e64(owner + 4, allocation);
    return memory;
}
