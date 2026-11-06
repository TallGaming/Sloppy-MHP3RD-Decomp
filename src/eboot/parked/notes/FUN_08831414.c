/*
 * Purpose: uncompiled ABI view of the peer-record update helper at
 * FUN_08831414. This is not a whole candidate.
 *
 * Two callers provide a pointer to a refreshed peer-record subobject. The
 * target forwards that pointer and a pointer sixteen bytes later together
 * with D_08a297c0 and D_08a297f8 to a parked dispatcher. Its result controls
 * a second call that receives a stack-local result object. The dispatcher,
 * second callee, peer-record layout, and local result type are unresolved.
 */
typedef unsigned char u8;

extern u8 D_08a297c0[6];
extern u8 D_08a297f8[];

void FUN_08831414(void *peer_record);
