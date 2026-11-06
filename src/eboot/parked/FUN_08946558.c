/* FUN_08946558: decode a payload and verify its stored digest.
 * Main EBOOT, attempt-high-01 241-512 byte batch 17. Format roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u16 DAT_08a17740[];
extern u16 DAT_08a17738[];

void FUN_0880c088(void *, void *, int);
void FUN_08946354(void *, int, void *);
int FUN_0880bff4(void *, void *, int);

int FUN_08946558(void *context, u16 *data, u32 size)
{
    u16 state[4];
    u8 digest[24];
    u16 *cursor = data + 4;
    u32 offset;

    state[0] = data[0];
    state[1] = data[1];
    state[2] = data[2];
    state[3] = data[3];
    for (offset = 8; offset < size; offset += 2) {
        u32 slot = offset & 3;
        u16 next = (u16)(((u32)state[slot] * (u32)DAT_08a17740[slot]) %
                         (u32)DAT_08a17738[slot]);
        state[slot] = next;
        *cursor ^= next;
        cursor++;
    }
    FUN_0880c088(context, data + 0x10, size - 0x20);
    FUN_08946354(data + 0x10, size - 0x20, digest);
    return FUN_0880bff4(digest, data + 6, 0x14) == 0;
}
