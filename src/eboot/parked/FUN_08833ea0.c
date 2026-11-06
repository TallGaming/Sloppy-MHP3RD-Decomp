/* Purpose: retain a parked ABI/field view.  Four direct caller edges and one
 * approved dependency are known, but the object fields on both conditional
 * paths remain unresolved.  This is not a candidate body. */
typedef unsigned char FUN_08833ea0_U8;
typedef struct { FUN_08833ea0_U8 opaque; } FUN_08833ea0_UnknownObject;
typedef int (*FUN_08833ea0_Entry)(FUN_08833ea0_UnknownObject *, FUN_08833ea0_UnknownObject *);
