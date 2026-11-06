typedef unsigned char u8;
typedef unsigned int u32;

#define FIELD(base, type, offset) (*(type *)((u8 *)(base) + (offset)))

/*
 * Purpose hypothesis: blend an indexed pair of float coefficients.
 * The local values name the lower coefficient, remaining amount, and upper
 * coefficient before combining them.
 */
extern float D_089685d8;

float FUN_088dc3c0(void *unused, void *base, u32 index, float amount)
{
    u8 *entry = (u8 *)base + (index * 4);
    float lower = FIELD(entry, float, 512);
    float remainder = D_089685d8 - amount;
    float upper = FIELD(entry, float, 516);

    return (lower * remainder) + (amount * upper);
}
