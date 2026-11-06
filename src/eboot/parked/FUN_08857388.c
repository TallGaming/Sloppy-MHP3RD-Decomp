/* Purpose: retain the supported pending-range dependency while target ABI remains unresolved. */
#include <stdint.h>

/* Verified dependency layout used by FUN_08856c58; this is not target ownership proof. */
typedef struct FUN_08857388_pending_range_view {
    uint8_t unknown_000[0x180];
    uint8_t pending;
    uint8_t slot;
    uint8_t unknown_182[2];
    void *first;
} FUN_08857388_pending_range_view;

extern int FUN_08856c58(FUN_08857388_pending_range_view *range, uint8_t slot);

/* No complete target signature or object contract is verified yet. */
extern void FUN_08857388_unverified(void);
