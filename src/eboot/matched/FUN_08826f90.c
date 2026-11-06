/*
 * FUN_08826f90: return byte 0xD8 of the global state record.
 *
 * Main EBOOT, match slice 1 (tiny functions). Names and types are
 * hypotheses unless stated.
 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

/* Hypothesis: a global pointer to a state record at 0x08A20FEC. */
struct State_08a20fec
{
    u8 unknown_00[0x1c];
    s32 value_1c;
    u8 unknown_20[1];
    u8 mode_21;
    u8 unknown_22[0xd8 - 0x22];
    u8 flag_d8;
};
extern struct State_08a20fec *D_08a20fec;

u8 FUN_08826f90(void)
{
    return D_08a20fec->flag_d8;
}
