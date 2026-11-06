/*
 * FUN_0884c3c0 field and dependency view.
 *
 * Purpose: preserve verified sink field information while the final descriptor
 * submission call has no confirmed ABI.  This is not a compilable candidate.
 */
typedef unsigned char u8;
typedef int s32;

struct Rec_088e6ff0 {
    u8 unknown_000[0x12c];
    u8 byte_12c;
    u8 byte_12d;
    u8 unknown_12e[0x167 - 0x12e];
    u8 byte_167;
};

void FUN_088e6ff0(struct Rec_088e6ff0 *rec, u8 first, s32 second);
void FUN_088e7048(void *rec, u8 value);
void FUN_088e7054(void *rec, u8 value);

/*
 * The function calls the three verified byte-field sinks in that order, then
 * directly calls PARKED FUN_08901000.  Its tentative descriptor declaration
 * is not a valid dependency contract.  Incoming FUN_088912f4 is likewise
 * PARKED, although its existing draft supplies a two-lane transfer view.
 * Mocked lane tracing shows that changing input lanes 0, 1, or 2 does not
 * alter the first four outgoing lanes, while changing input lane 3 alters
 * lane 3 of the three byte-field calls.  The caller's existing two-lane
 * declaration is therefore ABI-incomplete.  No callback lead, indirect call, or scalar
 * floating-point instruction was found.  These traces do not establish game
 * field meanings.
 */
