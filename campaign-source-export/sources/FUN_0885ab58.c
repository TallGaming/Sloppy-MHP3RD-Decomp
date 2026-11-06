/*
 * Purpose: create the fixed seven-word audio command and submit operation 2.
 *
 * The template source and seven-word extent are supported by synthetic target
 * dataflow. The first halfword becomes four and the second word's low byte
 * receives the low five bits of the input channel.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct AudioCommand0885ab58 {
    u16 kind;
    u16 first_tail;
    u8 channel;
    u8 second_tail[3];
    u32 words[5];
} AudioCommand0885ab58;

extern AudioCommand0885ab58 D_08965e48;
extern unsigned int FUN_0885a7ec(AudioCommand0885ab58 *command, unsigned int operation);

unsigned int FUN_0885ab58(unsigned int channel)
{
    AudioCommand0885ab58 command = D_08965e48;

    command.kind = 4;
    command.channel = (u8)(channel & 31);
    return FUN_0885a7ec(&command, 0x10000002);
}
