/* Purpose: extract a four-bit selector attribute from a narrow record. */
typedef struct {
    unsigned char reserved;
    unsigned char category;
    unsigned short index;
} Selector;

extern const unsigned char D_08980144[][40];
extern const unsigned char D_0897dffc[][40];
extern const unsigned char D_08984dac[][40];
extern const unsigned char D_08986f1c[][40];
extern const unsigned char D_089825ac[][40];

unsigned char FUN_0885d0b0(void *unused, const Selector *selector)
{
    (void)unused;
    switch (selector->category) {
    case 0: return D_08980144[selector->index][4] & 15;
    case 1: return D_0897dffc[selector->index][4] & 15;
    case 2: return D_08984dac[selector->index][4] & 15;
    case 4: return D_089825ac[selector->index][4] & 15;
    case 3: return D_08986f1c[selector->index][4] & 15;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        return 15;
    default: return 0;
    }
}
