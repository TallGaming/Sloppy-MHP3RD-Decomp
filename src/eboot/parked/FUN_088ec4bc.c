/*
 * FUN_088ec4bc: create the ATRAC3 worker and store its handle.
 *
 * Main EBOOT, G2 high-address slice. The API signature and handle type are hypotheses.
 */

typedef unsigned int u32;

u32 FUN_08960b30(const char *name, int stack_size, int priority, int attributes, int option);

void FUN_088ec4bc(u32 *handle)
{
    *handle = FUN_08960b30((const char *)0x089690c0, 0x100, 1, 1, 0);
}
