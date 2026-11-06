/* Purpose: submit a three-word command with one caller-selected low byte. */
extern unsigned int D_08965c0c[];
extern void FUN_088599f0(unsigned int one, const void *record, unsigned int size);

void FUN_08859ff8(unsigned char value)
{
    unsigned int local[3];
    local[0] = 0x10000009;
    local[1] = D_08965c0c[69];
    local[2] = (D_08965c0c[70] & 0xffffff00) | (value & 1);
    FUN_088599f0(1, local, 12);
}
