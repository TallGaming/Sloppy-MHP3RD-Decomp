/*
 * Purpose hypothesis: conditionally refresh a small identifier derived from
 * the global block at 0x08A29EE8, then drive two mode changes on the shared
 * 0x09BF5250 record.
 *
 * The observed call sequence obtains the +0x24 global-block address, writes a
 * two-word local pair, reverse-copies four bytes from a returned lane, and
 * compares the local pair and word against fields of the shared record before
 * the mode-changing calls.  This is an uncompiled field view, not a whole C
 * candidate: FUN_0882e484's return lane, FUN_088394dc's mode contract, and
 * the existing but ABI-incomplete FUN_088330c8 field view are all unproved.
 */
typedef unsigned int u32;

extern void *FUN_0882fc48(void);
extern void FUN_0882e484(); /* PARKED: formal arguments and return contract unknown. */
extern unsigned char *FUN_088304d0(unsigned char *dst, unsigned char *src);
extern int FUN_0883a8ac(const void *value);
extern int FUN_0883ac70(int value);
extern void FUN_08839fd4(int value);
extern void FUN_088394dc(); /* PARKED: observed mode lanes are not ABI. */

void FUN_088331b4();
