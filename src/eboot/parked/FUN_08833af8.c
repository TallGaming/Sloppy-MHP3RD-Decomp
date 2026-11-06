/*
 * Purpose: retain the evidence-backed partial view for a parked Group B node.
 *
 * Four direct callers reach this routine.  Its one verified dependency is
 * FUN_08830550.  Artificial executions complete with a zero return and take
 * distinct memory-read paths when the dependency return changes.  The object
 * fields and the dependency's typed contract are not established; this is not
 * a candidate body.
 */
typedef unsigned char FUN_08833af8_U8;

typedef struct FUN_08833af8_UnknownObject {
    FUN_08833af8_U8 opaque;
} FUN_08833af8_UnknownObject;

typedef int (*FUN_08833af8_Entry)(FUN_08833af8_UnknownObject *first,
                                  FUN_08833af8_UnknownObject *second);
