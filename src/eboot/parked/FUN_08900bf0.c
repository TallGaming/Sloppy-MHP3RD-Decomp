/*
 * FUN_08900bf0: submit COUNT descriptors with 0x24-byte object spacing.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Descriptor fields and argument roles are hypotheses.
 */

typedef short s16;
struct Descriptor_08900bf0 { int object; int second; int third; int fourth; s16 fifth; s16 sixth; };
void FUN_08900b7c(void *manager, struct Descriptor_08900bf0 *descriptor);

void FUN_08900bf0(void *manager, int object, int second, int count,
                  int fourth, s16 fifth, s16 sixth, int third)
{
    struct Descriptor_08900bf0 descriptor;
    int index;

    if (count < 1)
        return;
    descriptor.second = second;
    descriptor.third = third;
    descriptor.fourth = fourth;
    descriptor.fifth = fifth;
    descriptor.sixth = sixth;
    index = 0;
    do {
        index++;
        descriptor.object = object;
        FUN_08900b7c(manager, &descriptor);
        object += 0x24;
    } while (count != index);
}
