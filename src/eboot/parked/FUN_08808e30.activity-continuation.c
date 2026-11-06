/*
 * Purpose hypothesis: dtoa quorem for Pack_32 Bigint limbs.
 * ABI hypothesis: MIPS limb stores write the high halfword then the low
 * halfword through the little-endian 16-bit view.
 */
typedef int Long;
typedef unsigned int ULong;

typedef struct Bigint {
    struct Bigint *next;
    int k;
    int maxwds;
    int sign;
    int wds;
    ULong x[1];
} Bigint;

extern int FUN_0880d020(Bigint *left, Bigint *right);

#define STORE_INCREMENT(pointer, high, low) \
    (((unsigned short *)(pointer))[1] = (unsigned short)(high), \
     ((unsigned short *)(pointer))[0] = (unsigned short)(low), (pointer)++)

unsigned int FUN_08808e30(Bigint *b, Bigint *s)
{
    int n;
    Long borrow;
    Long y;
    Long z;
    ULong carry;
    ULong q;
    ULong ys;
    ULong si;
    ULong zs;
    ULong *bx;
    ULong *bxe;
    ULong *sx;
    ULong *sxe;

    n = s->wds;
    if (b->wds < n)
        return 0;
    sx = s->x;
    sxe = sx + --n;
    bx = b->x;
    bxe = bx + n;
    q = *bxe / (*sxe + 1);
    if (q) {
        borrow = 0;
        carry = 0;
        do {
            si = *sx++;
            ys = (si & 0xffff) * q + carry;
            zs = (si >> 16) * q + (ys >> 16);
            carry = zs >> 16;
            y = (*bx & 0xffff) - (ys & 0xffff) + borrow;
            borrow = y >> 16;
            z = (*bx >> 16) - (zs & 0xffff) + borrow;
            borrow = z >> 16;
            STORE_INCREMENT(bx, z, y);
        } while (sx <= sxe);
        if (!*bxe) {
            bx = b->x;
            while (--bxe > bx && !*bxe)
                --n;
            b->wds = n;
        }
    }
    if (FUN_0880d020(b, s) >= 0) {
        q++;
        borrow = 0;
        carry = 0;
        bx = b->x;
        sx = s->x;
        do {
            si = *sx++;
            ys = (si & 0xffff) + carry;
            zs = (si >> 16) + (ys >> 16);
            carry = zs >> 16;
            y = (*bx & 0xffff) - (ys & 0xffff) + borrow;
            borrow = y >> 16;
            z = (*bx >> 16) - (zs & 0xffff) + borrow;
            borrow = z >> 16;
            STORE_INCREMENT(bx, z, y);
        } while (sx <= sxe);
        bx = b->x;
        bxe = bx + n;
        if (!*bxe) {
            while (--bxe > bx && !*bxe)
                --n;
            b->wds = n;
        }
    }
    return q;
}
