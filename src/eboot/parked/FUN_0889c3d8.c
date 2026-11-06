/*
 * FUN_0889c3d8: assign a command word selected by a small mode value.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: parameter-width and conditional forms retain a different dispatch layout.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct Command {
    u32 reserved;
    u32 word;
} Command;

Command *FUN_0889c3bc(void *object, u16 index);

void FUN_0889c3d8(void *object, u16 index, u8 mode)
{
    Command *command = FUN_0889c3bc(object, index);

    if (mode == 2) {
        command->word = 0xdf0000a2;
    } else if (mode == 1) {
        command->word = 0xdf000032;
    } else if (mode == 3) {
        command->word = 0xdf0002a2;
    } else if (mode == 4) {
        command->word = 0xdf0000a6;
    }
}
