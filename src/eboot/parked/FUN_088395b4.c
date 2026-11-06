/*
 * Purpose: retain the proved dispatch boundary for FUN_088395b4.
 *
 * The sole direct caller supplies a selector and a 16-bit value.  A shared
 * state flag gates a 20-byte local-event initialization and an indirect
 * callback.  The callback code pointer and event-layout ownership are not
 * recovered, so this is intentionally not a whole candidate.
 */
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct LocalEvent20 {
    unsigned char before_enabled[12];
    unsigned char enabled;
    unsigned char before_selector[3];
    u16 selector;
    u16 value;
} LocalEvent20;

typedef int (*EventCallback)(LocalEvent20 *event, void *context, u32 enabled);

extern unsigned char *D_09bf5250;
extern void *FUN_088ebb10(void *destination, int value, u32 size);

/* Partial ABI/dataflow view only; do not compile as FUN_088395b4. */
int FUN_088395b4_partial(int selector, u16 value)
{
    LocalEvent20 event;

    if (selector == 19) {
        event.enabled = 1;
        event.selector = (u16)selector;
        event.value = value;
    }
    (void)event;
    (void)D_09bf5250;
    (void)FUN_088ebb10;
    return 0;
}
