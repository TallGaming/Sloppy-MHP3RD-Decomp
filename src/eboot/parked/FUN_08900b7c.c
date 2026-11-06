/*
 * FUN_08900b7c: submit a descriptor directly or invoke its attached object's method 8.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Descriptor and interface layouts are hypotheses.
 */

typedef unsigned char u8;
typedef short s16;

struct Descriptor_08900b7c {
    int object; int second; int third; int fourth; s16 fifth; s16 sixth;
};
void FUN_088ff8f0(void *manager, int object, int second, int fourth,
                  int fifth, int sixth, int third, int a, int b, int c);

void FUN_08900b7c(void *manager, struct Descriptor_08900b7c *descriptor)
{
    u8 *attached = *(u8 **)((u8 *)descriptor->object + 0x20);

    if (attached == 0) {
        FUN_088ff8f0(manager, descriptor->object, descriptor->second,
                     descriptor->fourth, descriptor->fifth, descriptor->sixth,
                     descriptor->third, -1, -1, 0);
        return;
    }
    (*(void (**)(void *))(*(u8 **)attached + 8))(attached);
}
