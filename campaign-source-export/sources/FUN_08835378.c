/*
 * Purpose hypothesis: this event-flow routine reaches the shared registration
 * helper once, selecting slot 8 and constructing callback code address
 * FUN_088369e4.  Its two context lanes and surrounding dispatch branches are
 * unresolved, so this is an uncompiled field view rather than a candidate.
 */
typedef void (*EventCallback_08835378)(void);

extern int FUN_08839da4(int index, EventCallback_08835378 callback,
                        void *first, void *second);

/* The actual target also calls the parked event dispatcher FUN_0883942c. */
