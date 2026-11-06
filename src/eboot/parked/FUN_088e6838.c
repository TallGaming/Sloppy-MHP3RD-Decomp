/*
 * FUN_088e6838: create the thread timer and store its handle in the context.
 *
 * Main EBOOT, G2 high-address slice. The context layout and API signature are hypotheses.
 */

typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

u32 FUN_08960b70(const char *name, int attributes);

void FUN_088e6838(void *context)
{
    FIELD(context, u32, 0x1101594) = FUN_08960b70((const char *)0x08968d40, 0);
}
