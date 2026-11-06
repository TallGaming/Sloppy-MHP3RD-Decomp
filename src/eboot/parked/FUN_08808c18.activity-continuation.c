/*
 * PARKED: append a pointer to a context-local chained registration list.
 *
 * The lock-token calls, context lookup, inline-node fallback, 32-entry limit,
 * 0x10c-byte allocation, and relock before publication are recovered from the
 * control flow.  Field names and the node layout remain hypotheses.
 */
typedef unsigned char u8;
typedef unsigned int u32;
extern int FUN_08960a50(void);
extern void FUN_08960a68(int token);
extern void *FUN_0880c5a4(void);
extern void *FUN_0880b710(void *context, u32 size);
#define FIELD(p, t, n) (*(t *)((u8 *)(p) + (n)))

int FUN_08808c18(void *value)
{
    int token = FUN_08960a50();
    void *context = FUN_0880c5a4();
    void *node = FIELD(context, void *, 0x148);

    if (node == 0) {
        node = (u8 *)context + 0x14c;
        FIELD(context, void *, 0x148) = node;
    }
    if ((int)FIELD(node, u32, 4) < 32) {
        FIELD(node, void *, 8 + 4 * FIELD(node, u32, 4)) = value;
        FIELD(node, u32, 4)++;
        FUN_08960a68(token);
        return 0;
    }
    FUN_08960a68(token);
    node = FUN_0880b710(context, 0x10c);
    if (node == 0)
        return -1;
    token = FUN_08960a50();
    FIELD(node, u32, 4) = 0;
    FIELD(node, void *, 0) = FIELD(context, void *, 0x148);
    FIELD(node, u32, 0x108) = 0;
    FIELD(context, void *, 0x148) = node;
    FIELD(node, void *, 8) = value;
    FIELD(node, u32, 4) = 1;
    FUN_08960a68(token);
    return 0;
}
