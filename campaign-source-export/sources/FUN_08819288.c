/*
 * Purpose: partial ABI and field-view recovery for a runtime registration path.
 *
 * This file intentionally has no function definition.  The target saves two
 * callee-preserved values, tests loaded record values, calls the lock/import
 * stubs, and reaches FUN_088191f8 with a loaded nested pointer plus zeroed
 * second and third argument registers.  The direct caller, import identities,
 * record ownership, and exact field layout remain unresolved.
 */
typedef struct FUN_08819288_RecordView {
    void *nested_registration_value; /* directly observed as a loaded pointer */
} FUN_08819288_RecordView;

typedef int FUN_08819288_LockToken;

extern FUN_08819288_LockToken FUN_08960a50(void);
extern void FUN_08960a68(FUN_08819288_LockToken token);
extern void FUN_08960b20(void);
extern void FUN_088191f8(void *value, int zero_1, int zero_2, void *opaque_3);
