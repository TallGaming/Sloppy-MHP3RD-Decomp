/*
 * Field and call-boundary view for FUN_088559ac.
 *
 * This is deliberately an uncompiled recovery note, not a candidate body.
 * Matched helpers establish that the shared context is an active record
 * pointer, but only identify a separate part at offset 0x294. Parked upstream
 * callers pass that context, a selector, a word-sized
 * resource value, and two trailing word values.  The target also has several
 * unresolved allocator/descriptor dependencies and indirect calls.  Those
 * facts support a resource-management role, but do not establish its exact
 * object layout, return contract, ownership transfer, or callee prototypes.
 */

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

/* Verified only up to the separately managed part; target-accessed fields TBD. */
typedef struct FUN_088559ac_RecordPrefix {
    u8 before_managed_part[0x294];
    u8 managed_part[1];
} FUN_088559ac_RecordPrefix;

/*
 * Observed upstream shape only.  This is not asserted to be the target's
 * callable prototype: immediate wrapper forwarding still needs recovery.
 */
typedef struct FUN_088559ac_UpstreamCall {
    void *context;
    u32 selector;
    u32 resource_value;
    u32 option;
    u32 extra;
} FUN_088559ac_UpstreamCall;

/*
 * Decoder metadata shows three indirect calls, direct allocator-family calls,
 * and halfword stores.  A future candidate must derive the involved object
 * fields and every dependency ABI from the immediate call sites rather than
 * treating similar parked implementations as authoritative declarations.
 */
