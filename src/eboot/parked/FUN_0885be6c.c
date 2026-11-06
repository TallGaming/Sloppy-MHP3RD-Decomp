/* Purpose: uncompiled field/ABI view for the selector-driven read-only leaf. */
typedef struct FUN_0885be6c_object_prefix {
    unsigned char unknown_00;
    unsigned char selector_01;
} FUN_0885be6c_object_prefix;

typedef unsigned short FUN_0885be6c_return;
FUN_0885be6c_return FUN_0885be6c(void *unused_lane1,
                                  const FUN_0885be6c_object_prefix *object_lane2);

/*
 * Observed target-owned facts only:
 * - the selector byte is read from the second integer-lane object at +1;
 * - multiple control paths read 16-bit fields from that same object lane;
 * - those paths return the zero-extended 16-bit value in the integer result;
 * - the body has no stores or direct calls.
 *
 * The full object layout, return type, and source-level selector ownership are
 * not yet proved.  This intentionally has no callable candidate definition.
 */
