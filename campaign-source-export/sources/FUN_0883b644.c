/*
 * Purpose: diagnostic draft for the network-record post-submit path.
 * The target clears a work record, invokes the record builder, observes a
 * six-byte status group, and clears a second packet region.  Field ownership
 * and the call-site ABI remain unresolved, so this is not a whole candidate.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern void FUN_088ebb10(void *dst, int value, unsigned int size);
extern void FUN_0883012c(void *record, const void *input, u16 kind, const void *payload);
extern int FUN_08830550(const signed char *values);

void FUN_0883b644(void *record, const void *input, u16 kind, const void *payload)
{
    u8 status[8];

    FUN_088ebb10(status, 0, sizeof(status));
    FUN_0883012c(record, input, kind, payload);
    if (FUN_08830550((const signed char *)status) != 0) {
        FUN_088ebb10(record, 0, 8);
    }
}
