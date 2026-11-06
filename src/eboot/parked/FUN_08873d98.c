/* Purpose: alternate destructor entry for the large screen/session object. */
extern void teardown_large_screen_entry(void *);

void FUN_08873d98(void *object)
{
    teardown_large_screen_entry(object);
}
