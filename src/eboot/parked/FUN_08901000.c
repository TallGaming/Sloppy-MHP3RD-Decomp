/*
 * FUN_08901000: submit COUNT descriptors with zero second/third fields.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Descriptor fields and argument roles are hypotheses.
 */

typedef short s16;
struct Descriptor_08901000 { int object; int second; int third; int fourth; s16 fifth; s16 sixth; };
void FUN_08900b7c(void *manager, struct Descriptor_08901000 *descriptor);

void FUN_08901000(void *manager, int object, int count, int fourth, s16 fifth, s16 sixth)
{
    struct Descriptor_08901000 descriptor;
    int index;

    descriptor.third = 0;
    descriptor.second = 0;
    if (count < 1)
        return;
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
