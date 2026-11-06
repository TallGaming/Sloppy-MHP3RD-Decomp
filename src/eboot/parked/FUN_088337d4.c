/*
 * FUN_088337d4 field and ABI view.
 *
 * This is an uncompiled recovery note, not a whole-function candidate.
 * Target flow proves that it obtains a state address from FUN_0882fc38 and
 * clears a fixed, unresolved span through the typed byte-fill thunk.  It
 * then calls four PARKED packet helpers, so their callable contracts must
 * be recovered before a natural whole C body is valid.
 */

typedef unsigned int u32;

extern void *FUN_0882fc38(void);
extern void *FUN_088ebb10(void *destination, int value, u32 size);

struct Fun088337d4StateView {
    void *cleared_state_address;
    u32 clear_value;
    u32 clear_size; /* Constant at this call site; value unresolved here. */
};

