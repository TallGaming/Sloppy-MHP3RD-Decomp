/*
 * Purpose: retain an ABI field view for FUN_0884b598 while its control-flow
 * and unresolved callees are insufficient for a whole natural C candidate.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

/* Observed as the first argument's object: byte reads at 1 and a word write at 32. */
struct TargetState {
    u8 unknown_00;
    u8 mode_01;
    u8 unknown_02[30];
    u32 unknown_20;
};

/* A retained second-object field view: byte reads occur at 0, 1, and 3. */
struct InputRecord {
    u8 field_00;
    u8 field_01;
    u8 unknown_02;
    u8 field_03;
};

/* Verified registered dependency prototypes retained for caller reconstruction. */
int FUN_0885ca20(u32 unused, u32 index);
void FUN_08867d40(void *record, u16 value);
u8 FUN_088fc0b8(void *unused, u8 index);

/*
 * No function body is supplied. The routine has an 80-byte frame, saves several
 * callee registers, has eight direct dependencies, and includes five unresolved
 * calls each to two parked routines. Its callable signature and branch-specific
 * argument flow remain unproven.
 */
