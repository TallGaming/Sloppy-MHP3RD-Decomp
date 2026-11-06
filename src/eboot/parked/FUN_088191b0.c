/*
 * Purpose: diagnostic-only recovery of a no-argument runtime cleanup helper.
 *
 * Private instruction tracing establishes a guarded global pointer, a test of
 * one field of that pointed-to record, an exceptional no-argument call, and
 * clearing of the global pointer.  The imported eight-byte callee has no
 * recovered symbol/ABI and the record/global ownership is unknown.  This is
 * therefore a compact diagnostic placeholder used only to test the natural
 * C shape; it is not a source-ownership or library identification claim.
 */
typedef struct RuntimeRecord {
    void *exceptional_state;
} RuntimeRecord;

extern RuntimeRecord *g_runtime_record;
extern void FUN_08960b80(void);

void FUN_088191b0(void)
{
    RuntimeRecord *record = g_runtime_record;

    if (record != 0) {
        if (record->exceptional_state != 0) {
            FUN_08960b80();
        }
        g_runtime_record = 0;
    }
}
