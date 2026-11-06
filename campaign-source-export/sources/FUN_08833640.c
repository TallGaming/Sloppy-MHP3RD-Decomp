/*
 * Purpose: retain the supported ABI and ownership view for a parked wrapper.
 *
 * Direct caller evidence identifies one game caller.  Artificial scalar runs
 * preserve argument lane zero in the return lane and show an eight-call path.
 * The target also has conditional paths and five unaligned copy pairs.  The
 * object layouts and the ten dependency prototypes are not yet established,
 * so this is deliberately a field/ABI view, not a candidate body.
 */
typedef unsigned char FUN_08833640_U8;

typedef struct FUN_08833640_UnknownObject {
    FUN_08833640_U8 opaque;
} FUN_08833640_UnknownObject;

typedef FUN_08833640_UnknownObject *(*FUN_08833640_Entry)(
    FUN_08833640_UnknownObject *first,
    FUN_08833640_UnknownObject *second);
