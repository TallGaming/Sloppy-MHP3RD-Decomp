/*
 * Base destructor for an object whose first word is a virtual-table pointer.
 * Derived destructor candidates at 0x088194f8 and in the following gap write
 * their own tables, then tail-call here.  The class and owner are unresolved.
 */
extern unsigned char D_0896a810;

void FUN_088194e8(void *object)
{
    *(void **)object = &D_0896a810;
}
