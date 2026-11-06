/*
 * FUN_08856fc4: process a fixed twenty-slot render-command batch for one
 * PendingRange descriptor.
 *
 * PARKED field/control-flow view, not a compile candidate.  Synthetic traces
 * show that the first input is forwarded unchanged to FUN_08856c58 on each
 * of twenty iterations and that the derived second argument is exactly the
 * ascending slot sequence 0 through 19.  The float-to-word packing and the
 * indirect callback branch have not yet been bound to a complete input layout.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

typedef struct PendingRange08856fc4 PendingRange08856fc4;

extern s32 FUN_08856c58(PendingRange08856fc4 *range, u8 slot);

s32 FUN_08856fc4(PendingRange08856fc4 *range)
{
    s32 slot;

    for (slot = 0; slot < 20; ++slot) {
        /* The omitted body derives the slot and packs scalar float inputs. */
        FUN_08856c58(range, (u8)slot);
    }

    return 0;
}
