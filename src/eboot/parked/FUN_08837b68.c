/* Purpose: retain the supported two-dependency control-flow shape pending ABI and binding recovery. */
typedef unsigned int u32;

/* These direct dependency relocations have no verified names or prototypes yet. */
extern u32 D_ADDRESS_dependency_a(void);
extern u32 D_ADDRESS_dependency_b(void);

/*
 * Uncompiled partial field view, not a whole candidate.
 * Artificial probes support two direct dependencies, result-dependent repeated
 * invocation, two conditional paths, and a boolean-like result. Object
 * stores and true call signatures need caller and relocation evidence.
 */
u32 FUN_08837b68_field_view(void)
{
    u32 first = D_ADDRESS_dependency_a();

    if (first != 0) {
        return 0;
    }
    return D_ADDRESS_dependency_b() == 0;
}
