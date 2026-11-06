/* Purpose: uncompiled field view from synthetic artificial-data probes. */
typedef unsigned int u32;
struct AudioBody { u32 word[7]; };
extern struct AudioBody D_08965e64;
extern u32 FUN_0885a7ec(struct AudioBody *, u32);

u32 FUN_0885abd4(void)
{
    struct AudioBody body = D_08965e64;
    return FUN_0885a7ec(&body, 0x10000001U);
}
