/*
 * FUN_089011c8: submit a record and append a three-word command to a global queue.
 *
 * Main EBOOT, attempt-high-01 medium batch 1. Queue and record layouts are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;
extern void *D_09beb0bc;
void FUN_08901168(void *manager, int value, int zero, int x, int y);
u32 FUN_088fa4fc(void *manager);
void FUN_088756e8(void *queue, u32 *command, int count, u32 token);

void FUN_089011c8(void *unused, int *record)
{
    int x = 0, y = 0;
    u8 *point = (u8 *)record[1];
    u8 *queue;
    u32 *command;
    u32 token;

    if (point != 0) {
        y = *(short *)(point + 0x1a);
        x = *(short *)(point + 0x18);
    }
    FUN_08901168(D_09beb0bc, record[0], 0, x, y);
    queue = *(u8 **)0x08aaceb8;
    token = FUN_088fa4fc(D_09beb0bc);
    command = *(u32 **)(queue + 0x70194);
    command[1] = 0x10000000;
    *(u32 **)(queue + 0x70194) = command + 3;
    command[2] = 0x08000000;
    command[0] = 0xc6000101;
    FUN_088756e8(queue, command, 3, token);
    command[0] = 0xc6000000;
}
