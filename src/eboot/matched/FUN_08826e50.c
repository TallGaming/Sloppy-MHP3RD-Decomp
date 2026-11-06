/*
 * Purpose: append a six-byte command header and its payload to the subsystem
 * output buffer, or record the overflow requirement in the caller's record.
 *
 * Hypothesis: State_08826e50 is a queued output buffer.  Its three known
 * fields are a used-byte count, a capacity, and the start of the byte store.
 * The header's byte 2 comes from the owner record at offset 0x23.
 *
 * Contract recovered from the two paths: on insufficient capacity, preserve
 * the payload and use the existing record helper to report kind 4 and the
 * total required byte count.  Otherwise consume exactly header.size bytes
 * after copying both header and payload.  The lone known caller is
 * FUN_088271ac; the callee is not attributed to a library.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

struct OutputBuffer_08826e50 {
    s32 used;
    s32 capacity;
    u8 *data;
};

struct PacketHeader_08826e50 {
    u8 size;
    u8 kind;
    u8 owner_tag;
    u8 terminator;
    u16 reserved;
};

extern u8 *D_08a20fec;
struct Rec_08826e3c;
extern s32 FUN_08826e3c(struct Rec_08826e3c *record, s32 kind, s32 required);
extern void FUN_088ebb18(void *destination, const void *source, unsigned int size);

s32 FUN_08826e50(u8 *owner, const void *payload, s32 payload_size, u8 kind)
{
    u8 *state = D_08a20fec;
    struct OutputBuffer_08826e50 *output =
        (struct OutputBuffer_08826e50 *)(state + 0x190);
    struct PacketHeader_08826e50 header;
    s32 required = output->used + payload_size + 6;

    if (output->capacity < required)
        return FUN_08826e3c((struct Rec_08826e3c *)owner, 4, required);

    header.size = payload_size + 6;
    header.kind = kind;
    header.owner_tag = owner[0x23];
    header.terminator = (u8)-1;
    header.reserved = (u16)-1;
    FUN_088ebb18(output->data + output->used, &header, 6);
    FUN_088ebb18(output->data + output->used + 6, payload, (unsigned int)payload_size);
    output->used += header.size;
    return 0;
}
