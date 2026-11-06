/* Purpose: retain the supported wrapper return path while its dependency and data bindings are unresolved. */
typedef unsigned int u32;

/* The target makes one direct dependency call; its ABI and relocation need a verified binding. */
extern void *D_ADDRESS_target_dependency(void);

/*
 * Uncompiled partial field view, not a whole candidate.
 * Synthetic executions show that the target preserves a zero/nonzero dependency
 * result through its return path. The stack and global stores require typed
 * caller and relocation evidence before this can become natural source.
 */
void *FUN_088377bc_field_view(void)
{
    void *result = D_ADDRESS_target_dependency();

    if (result == 0) {
        return 0;
    }
    return result;
}
