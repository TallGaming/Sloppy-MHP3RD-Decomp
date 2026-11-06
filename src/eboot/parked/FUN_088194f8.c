/*
 * Derived destructor: restore this class's virtual table, then let the base
 * destructor restore its table.  The class name is not yet identified.
 */
extern unsigned char D_0896a830;
extern void FUN_088194e8(void *object);

void FUN_088194f8(void *object)
{
    *(void **)object = &D_0896a830;
    FUN_088194e8(object);
}
