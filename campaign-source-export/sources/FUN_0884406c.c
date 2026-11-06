/* Purpose: test the observed scalar wrapper ABI with its explicit zero selector. */
typedef unsigned int u32;

extern u32 FUN_08842bb4(u32 context, u32 value, u32 selector,
                          u32 lane3, u32 lane4, u32 lane5, u32 lane6, u32 lane7);

u32 FUN_0884406c(u32 context, u32 value, u32 ignored_selector,
                  u32 lane3, u32 lane4, u32 lane5, u32 lane6, u32 lane7)
{
    return FUN_08842bb4(context, value, 0, lane3, lane4, lane5, lane6, lane7);
}
