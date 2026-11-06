/*
 * Purpose: retain the target-local field and callee relationships before a
 * whole source is justified. This is deliberately uncompiled.
 *
 * Callers supply a state pointer, a key-table pointer, and a 23-byte mutable
 * record. The target writes result bytes 7..13 after repeated signed-positive
 * FUN_0885cafc queries. Its positive path also reads/writes record fields in
 * the ranges 0..6 and 14..22, calls the unresolved FUN_088a5644,
 * FUN_0883e75c, and FUN_08842bb4, then conditionally invokes FUN_0883e974.
 */
typedef unsigned char u8;
typedef unsigned short u16;

struct Record088434a8 {
    u16 field_00;
    u8 field_02;
    u8 selector;
    u8 field_04;
    u8 field_05;
    u8 field_06;
    u8 results[7];
    u8 fields_14_to_22[9];
};

extern int FUN_0885cafc(void *context, const u8 *key, u8 selector);
extern u8 FUN_088a5644(void *record, u8 key);
extern int FUN_0883e75c(void *first, void *second, u8 selector, int mode);
extern int FUN_08842bb4(void *first, void *second, u8 selector, int mode);
extern int FUN_0883e974(void *unused, const u8 *keys, struct Record088434a8 *record);

/* The exact branch reduction, output-field meanings, and return contract are
 * unresolved because their only target-local dependency is PARKED.
 */
extern int FUN_088434a8(void *state, const u8 *keys, struct Record088434a8 *record);
