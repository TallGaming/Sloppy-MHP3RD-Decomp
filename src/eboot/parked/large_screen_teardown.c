/* Shared readable model used by the three adjacent destructor drafts. */
#include "large_screen_teardown.h"

void teardown_large_screen_entry(void *object)
{
    teardown_large_screen(object);
}
