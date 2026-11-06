/*
 * Recover a metadata value by one-based identifier.
 *
 * The helper fills a four-word result block and returns a status.  The target
 * returns zero for a failed lookup, otherwise the third result word.  Field
 * names and the helper's broader ownership remain descriptive hypotheses.
 */
struct FUN_0881ca70_info {
    int first;
    int second;
    int value;
    int fourth;
};

extern int FUN_08821258(int identifier, struct FUN_0881ca70_info *out);

int FUN_0881ca70(int identifier)
{
    struct FUN_0881ca70_info info;

    if (FUN_08821258(identifier - 1, &info) == 0)
        return 0;
    return info.value;
}
