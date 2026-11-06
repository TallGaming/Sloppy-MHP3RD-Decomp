/*
 * Purpose: record the supported two-record dispatch view for this Group-B
 * wrapper. This is an uncompiled PARKED field view, not a whole candidate.
 *
 * The target checks the first record and the record at +0x20 with the exact
 * matched predicate FUN_088fac54. A nonzero predicate result dispatches to
 * FUN_088fa038 using a shared manager pointer and distinct flags. Between
 * the checks, it submits the second record through FUN_088ff8f0.
 *
 * The incoming coordinate, stack, and complete descriptor ABI are unresolved.
 */
typedef unsigned int u32;

extern void *D_09beb0bc;
extern int FUN_088fac54(char *record);
extern void FUN_088fa038(void *manager, u32 flags);
extern void FUN_088ff8f0();

void FUN_088fff0c_field_view(char *record_pair, u32 color_or_value,
    int mode_or_field)
{
    if (FUN_088fac54(record_pair) != 0) {
        FUN_088fa038(D_09beb0bc, 1);
    }

    /* Remaining arguments are forwarded from unresolved input/stack lanes. */
    FUN_088ff8f0(D_09beb0bc, record_pair + 0x20, color_or_value, mode_or_field);

    if (FUN_088fac54(record_pair + 0x20) != 0) {
        FUN_088fa038(D_09beb0bc, 0);
    }
}
