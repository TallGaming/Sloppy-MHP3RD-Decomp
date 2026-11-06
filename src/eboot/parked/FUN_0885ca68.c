/* Purpose: preserve directly observed call lanes and entry-field reads for a parked predicate. */
typedef unsigned char u8;

extern int FUN_0885ca20(void *context, unsigned int zero, unsigned int selector);

/*
 * This is an uncompiled field view, not a whole-function candidate.
 * Synthetic calls show that the second incoming lane is not read by this
 * target. The sole direct call forwards lanes 0 and 2 while setting lane 1
 * to zero. If its returned entry is nonzero, the target reads byte fields
 * at offsets 1 and 3. The unresolved absolute-state condition controls the
 * return value, so no behavior body is claimed here.
 */
struct Entry_0885ca68 {
    u8 unknown0;
    u8 field1;
    u8 unknown2;
    u8 field3;
};

/* The actual predicate and return convention remain unresolved. */
