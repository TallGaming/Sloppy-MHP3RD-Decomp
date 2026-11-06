/*
 * Purpose: retain the evidenced storage and call boundary for FUN_08859c4c.
 * This is an uncompiled partial field view, not a whole-function candidate.
 * The sole declared C caller supplies no arguments.  The target uses the
 * loader-zero-filled words below, invokes four PSP imports, one parked game
 * dependency, and two library-formatting calls.  The 0x08a33380..0x08a3338c
 * storage is initialized by FUN_088597d0/FUN_088598d0 and shared with
 * FUN_088599f0. D_08a3338c is a verified SceUID created by FUN_088598d0;
 * D_08a31df8 is interrupt nesting and D_08a31df4 holds saved PSP flags.
 * Import prototypes and the storage object's semantic layout remain unproved.
 */
typedef unsigned int u32;
typedef int s32;
typedef s32 SceUID;

/* Adjacent four-byte loader-zero-filled storage; object ownership unknown. */
extern u32 D_08a33380;
extern u32 D_08a33384;
extern u32 D_08a33388;
extern SceUID D_08a3338c;

/* Shared interrupt-state words, accessed by the target as scalars. */
extern u32 D_08a31df4;
extern u32 D_08a31df8;

/* Verified import used after the parked audio-command dependency returns. */
extern int FUN_08960bc0(SceUID semaid, int signal);

/* The declared, independently observed caller establishes a void boundary. */
void FUN_08859c4c(void);
