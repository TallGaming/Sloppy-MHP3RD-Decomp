/* Purpose: unregister and tear down a large screen/session object. */
extern void teardown_large_screen_entry(void *);

void FUN_08873330(void *object)
{
    teardown_large_screen_entry(object);
}
