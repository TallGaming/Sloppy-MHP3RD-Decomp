/*
 * FUN_088e6478: call method 0x34 on the global object's interface.
 *
 * Main EBOOT, G2 high-address slice. The object layout and types are hypotheses.
 */

typedef unsigned char u8;
typedef void (*Method088e6478)(void);

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

extern void **D_08a3387c;

void FUN_088e6478(void)
{
    void *table = *D_08a3387c;
    Method088e6478 method = FIELD(table, Method088e6478, 0x34);

    method();
}
