/*
 * Purpose: retain the evidenced event-style ABI field view for a later natural
 * reconstruction of FUN_08839880.  This is not a candidate implementation.
 *
 * Two call sites in FUN_088399f0 reach this target.  The target directly calls
 * the verified 16-bit global comparison FUN_0882e554 and the typed byte-fill
 * thunk FUN_088ebb10, then has an unresolved indirect callback path.  Those
 * facts support a shared event/context operation but do not establish a
 * callable signature, callback type, complete state layout, or return
 * contract.  The only observed direct caller is the parked selector view,
 * whose calls do not consume a result.  A two-case synthetic comparison probe
 * reaches materially different paths, including a nonzero result path, so a
 * void-return body would be an unjustified simplification.
 * Artificially changing observed scalar state also reaches pointer-sensitive
 * paths, reinforcing that no scalar-only state declaration is adequate.
 * Under synthetic comparison outcomes, the false route reaches byte fill once
 * while the true route repeatedly revisits the comparison; this establishes a
 * control-flow distinction, not the records, bounds, or ownership involved.
 */
#include <stdint.h>

extern int FUN_0882e554(uint16_t value);
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);

typedef struct FUN_08839880_event_fields {
    uint16_t comparison_value;
    void *fill_destination;
    void (*unresolved_callback)(void);
} FUN_08839880_event_fields;

/* No body: an uncompiled field view is safer than an invented callback ABI. */
