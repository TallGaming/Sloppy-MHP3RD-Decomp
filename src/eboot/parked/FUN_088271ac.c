/* Purpose: partial, source-faithful control map for a custom controller that
 * scans two byte streams, builds six-byte framed records, updates per-record
 * timing/state, and appends payloads through FUN_08826e50.
 *
 * This file intentionally contains no compiled whole-function implementation.
 * The 1,656-byte routine has unresolved record-state callbacks and timing
 * branches; a stub would misrepresent the recovered behavior and must not be
 * checked as a matching candidate.
 */
typedef unsigned char u8;

typedef struct ByteBuffer {
    int length;
    int capacity;
    u8 *data;
} ByteBuffer;

typedef struct ControllerRecordPrefix {
    u8 state_at_0x68;
} ControllerRecordPrefix;

typedef struct ControllerPrefix {
    u8 reserved_00_to_21[0x22];
    u8 record_count;       /* +0x22 */
    u8 selected_record;    /* +0x23 */
} ControllerPrefix;

extern int FUN_08826e50(ControllerPrefix *owner, const void *payload,
                         int payload_length, u8 kind);

/* Recovered framing uses kinds 3 for the shared-stream payload path and 2
 * for the argument-buffer payload path.  The complete outer branch and record
 * callback graph is documented in FUN_088271ac.control-map.local.log. */
