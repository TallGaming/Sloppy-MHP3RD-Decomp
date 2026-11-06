/*
 * Purpose: retain an evidence-backed event-selector control view, not an
 * exact or complete C candidate.
 *
 * Eight direct callers provide selector values through a0; all observed uses
 * discard the result lane. The target consumes the selector's low byte,
 * clears a 20-byte local event, consults shared predicates for 16, selector,
 * 2, and 0, and reaches the parked event dispatcher. It also calls the
 * unclassified local-event helper twice. An 80-state artificial predicate
 * matrix completes through seven distinct safe call paths; it corroborates
 * that selector/predicate values control the dispatcher path, but it does
 * not establish a public result contract. Branch polarity, dispatcher ABI,
 * and local-event ownership remain unresolved, so this is uncompiled.
 */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct Event20 {
    u8 bytes[20];
} Event20;

extern void *FUN_088ebb10(void *destination, int value, u32 size);
extern int FUN_0882e50c(u8 value);
extern int FUN_0882e528(signed char value);
extern unsigned short FUN_0882e544(void);
extern void FUN_088394dc(void);
extern void FUN_08839880(void);

void FUN_088399f0_partial(u8 selector)
{
    Event20 local_event;

    FUN_088ebb10(&local_event, 0, sizeof(local_event));
    /* The reference branches on these predicate results in target order. */
    (void)FUN_0882e50c(16);
    (void)selector;
    FUN_088394dc();
    (void)FUN_0882e50c(selector);
    (void)FUN_0882e50c(2);
    (void)FUN_0882e528(0);
    FUN_08839880();
    (void)FUN_0882e544();
    FUN_08839880();
}
