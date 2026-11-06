/*
 * FUN_08838d00 purpose: retain a typed frame and call-boundary view while
 * callee ownership and three callable ABIs are unresolved.
 *
 * This is an uncompiled partial, not a whole-function candidate.  The frame
 * offsets and the two verified callees are supported by target data flow.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef struct FUN_08838d00_Frame {
    u8 reversed_shared_record[4];
    u8 worker_state[8];
    u8 opaque_0c[0x14];
    u8 result_object[0x20];
} FUN_08838d00_Frame;

extern void *FUN_0882fc48(void);
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);
extern u8 *FUN_088304d0(u8 *destination, u8 *source);

/* The following call boundaries are observed but not callable declarations.
 * FUN_0882e484 receives the cleared eight-byte worker region.
 * FUN_088377bc consumes the local frame after the reverse copy.
 * FUN_08838bdc receives result_object, worker_state, zero, and the prior
 * result.  Their ownership and prototypes need caller or source evidence.
 */

enum {
    FUN_08838D00_REVERSED_RECORD_SIZE = 4,
    FUN_08838D00_WORKER_STATE_SIZE = 8,
    FUN_08838D00_RESULT_OBJECT_OFFSET = 0x20,
};
