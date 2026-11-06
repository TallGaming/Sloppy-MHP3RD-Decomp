/* Register a callback and two context pointers in a vacant event slot. */
typedef int (*EventCallback)(void);

typedef struct EventSlot {
    EventCallback callback;
    void *first;
    void *second;
    unsigned char reserved[20];
    unsigned char active;
    unsigned char payload[1439];
} EventSlot;

typedef struct EventState {
    unsigned char reserved[0x30488];
    EventSlot slots[];
} EventState;

extern EventState *D_09bf5250;
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);

int FUN_08839da4(int kind, EventCallback callback, void *first, void *second)
{
    EventSlot *slot = &D_09bf5250->slots[(unsigned short)kind];

    if (slot->active != 0)
        return -1;
    (void)FUN_088ebb10(slot, 0, sizeof(*slot));
    slot->callback = callback;
    slot->second = second;
    slot->active = 1;
    slot->first = first;
    return 0;
}

