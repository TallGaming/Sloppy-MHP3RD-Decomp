/*
 * Purpose: retain the verified ABI and dependency view for FUN_0884d614.
 *
 * This is an uncompiled partial field view, not a whole-function candidate.
 * Its sole declared caller supplies all eight EABI integer argument slots
 * from distinct local stack fields; slot 6 is the constant 1.  The 535-word
 * target performs 36 direct calls, including 12 calls to the registered
 * two-argument slot-zero writer FUN_08867d40.  Most other direct
 * dependencies are PARKED, so their callable ABI cannot be invented.
 */

typedef unsigned short u16;

extern void FUN_08867d40(void *rec, u16 value);
