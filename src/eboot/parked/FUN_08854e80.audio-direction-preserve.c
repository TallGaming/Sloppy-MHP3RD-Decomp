/* Store the angle's direction code and biased offset in an audio command. */
struct AudioDirection08854e80 {
    unsigned int command;
    unsigned char before_offset[0x28 - 4];
    int offset;
    unsigned char before_code[0x38 - 0x2c];
    unsigned int direction;
};

extern unsigned int FUN_08854c4c(float angle);
extern int FUN_08854cf4(float angle);

void FUN_08854e80(struct AudioDirection08854e80 *command, float angle)
{
    command->command |= 0x2200;
    command->direction = FUN_08854c4c(angle);
    command->offset = FUN_08854cf4(angle) + 64;
}

