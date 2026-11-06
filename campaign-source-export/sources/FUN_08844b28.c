/* Purpose: preserve verified target argument lanes and state-field evidence without claiming whole-function recovery. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

/* D_08aace80 is a verified writable global pointer; pointee ownership remains unresolved. */
extern u8 *D_08aace80;

/* These are direct target dependencies.  Only FUN_088a6090 has registered C. */
extern void *FUN_0886cae0(void *object, int index);
extern void FUN_088a6090(void);

/*
 * Real direct callers supply four integer lanes:
 * (0, 6, 1, 6), (0, 25, 0, 0), and (1, 0, 0, 0).
 * Synthetic artificial inputs confirm that lane 0 selects by its low byte:
 * zero and 256 take the same call path, while 1 and 2 take the other path.
 * The target operates on D_08aace80's
 * pointee at observed offsets 0x5ac, 0xbdc, 0xc10 and 0xc1a.  It invokes
 * FUN_0886cae0 seven times, including indices 0, the 16-bit field at 0xbdc,
 * the byte fields at 0x5ac and 0xc1a, and one computed index.
 *
 * This is intentionally an uncompiled field view.  Other direct callees,
 * the pointee layout, output contract, and ownership remain unproved.
 */
