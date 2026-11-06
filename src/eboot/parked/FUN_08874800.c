/* Purpose: tear down a large screen/session object, then destroy its base. */
extern void teardown_large_screen_entry(void *);
extern void FUN_08826abc(void *);

void FUN_08874800(void *object)
{
    teardown_large_screen_entry(object);
    FUN_08826abc(object);
}
