/* Purpose: initialize a four-byte command record and submit it. */
extern unsigned char *D_08a20fec;
extern void FUN_08827824(void *value, void *context, void *command);

struct Command {
    unsigned char kind;
    unsigned char zero;
    unsigned char one;
    unsigned char sentinel;
};

void FUN_08827944(void *value)
{
    unsigned char *base = D_08a20fec;
    struct Command *command = (struct Command *)(base + 0x1a5bc);
    command->sentinel = 0xff;
    command->kind = 4;
    command->one = 1;
    command->zero = 0;
    FUN_08827824(value, base + 0x1b4, command);
}
