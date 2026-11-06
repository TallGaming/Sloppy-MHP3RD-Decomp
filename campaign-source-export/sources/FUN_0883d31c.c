/*
 * Purpose: retain the verified ABI and field-access view for FUN_0883d31c.
 *
 * This is an uncompiled partial view, not a whole-function candidate. The
 * incoming caller forwards four GPR argument slots unchanged. Local target
 * flow proves a three-argument byte-fill call with destination in argument
 * slot 0 and zero in slot 1. It also reads byte fields from argument slots 1
 * and 3 and writes destination byte field 0x12e2. A separate branch reaches
 * a byte write at absolute address 0x089e12d8. The pending callee's prototype
 * and the ownership of the global pointer loaded from 0x08a3345c remain
 * unresolved.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern void *FUN_088ebb10(void *destination, int value, u32 size);
extern void FUN_0885c7bc(void);

struct FUN_0883d31c_object_view {
    u8 unknown_0000[0x12e2];
    u8 field_12e2;
};

/* The remaining branch predicates and the fill extent are intentionally absent. */
