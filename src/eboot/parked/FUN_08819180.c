/* Purpose: return the current caught exception's type descriptor, or null.
 * The no-argument globals helper returns a record whose first member is the
 * caught-exception chain head. Its first member is the descriptor pointer.
 * These are structural views only; unchanged public C++ TU proof is absent.
 */
struct ExceptionView_08819180 { void *type_descriptor; };
struct GlobalsView_08819180 { struct ExceptionView_08819180 *caught; };
extern struct GlobalsView_08819180 *FUN_088188cc(void);

void *FUN_08819180(void)
{
    struct ExceptionView_08819180 *caught = FUN_088188cc()->caught;
    if (caught != 0)
        return caught->type_descriptor;
    return 0;
}
