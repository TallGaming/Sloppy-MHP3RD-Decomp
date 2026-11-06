/*
 * Purpose: retain the verified local call/data-flow view for FUN_0884ca18.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * The target loads a record pointer from D_09be9f18 and invokes the three
 * registered record-byte writers with values 14/14, 0, and 16.  It then
 * invokes the parked descriptor submitter with a manager from D_09beb0bc,
 * an object address rooted at D_0897bc5c, count 9, and three zero values.
 * Direct writes in the target remain insufficiently typed to model safely.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern void *D_09be9f18;
extern void *D_09beb0bc;
extern u8 D_0897bc5c[];

extern void FUN_088e6ff0(void *rec, u8 first, u32 second);
extern void FUN_088e7048(void *rec, u8 value);
extern void FUN_088e7054(void *rec, u8 value);
extern void FUN_08901000(void *manager, void *object, int count,
                          int fourth, short fifth, short sixth);
