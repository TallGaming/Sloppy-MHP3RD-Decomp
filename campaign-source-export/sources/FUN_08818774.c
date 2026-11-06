/*
 * Purpose: provide the fixed runtime-object address used by the adjacent
 * exception-runtime code.  The pointee type and ownership are not recovered;
 * this isolated leaf only writes the address through its ABI output pointer.
 */
extern unsigned char D_0896a718[];

void FUN_08818774(void **out_object)
{
    *out_object = D_0896a718;
}
