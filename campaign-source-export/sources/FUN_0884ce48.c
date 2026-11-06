/*
 * Partial ABI field view for FUN_0884ce48.
 *
 * Its sole declared caller supplies all eight independent integer lanes from
 * its frame.  Target flow forwards those lanes through 20 observed call
 * sites.  The aggregate and the PARKED callee contracts are not recovered,
 * so this file deliberately defines no callable implementation.
 */
typedef unsigned int u32;

struct Fun0884ce48IncomingLanes {
    u32 lane0;
    u32 lane1;
    u32 lane2;
    u32 lane3;
    u32 lane4;
    u32 lane5;
    u32 lane6;
    u32 lane7;
};

struct Fun0884ce48KnownDependencies {
    void *descriptor_manager;
    void *resource_manager;
    void *selector_context;
};
