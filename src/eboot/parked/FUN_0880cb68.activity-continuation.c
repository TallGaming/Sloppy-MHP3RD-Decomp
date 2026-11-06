/*
 * Public-source candidate: Newlib mprec.c mult (1.12/1.15 identical body).
 * It is a semantic/ABI lead only: its documented Group-A build is 580 bytes,
 * not this target's 544 bytes, so it has no library or match classification.
 */
typedef unsigned long __ULong;

struct _reent;
typedef struct _Bigint {
    struct _Bigint *_next;
    int _k, _maxwds, _sign, _wds;
    __ULong _x[1];
} _Bigint;

_Bigint *FUN_0880d3d0(struct _reent *ptr, int k);

/* Newlib's MIPS-oriented packed-halfword store-and-increment operation. */
#define Storeinc(a, b, c) (((unsigned short *)(a))[1] = (unsigned short)(b), \
                           ((unsigned short *)(a))[0] = (unsigned short)(c), \
                           (a)++)

_Bigint *FUN_0880cb68(struct _reent *ptr, _Bigint *a, _Bigint *b)
{
    _Bigint *c;
    int k, wa, wb, wc;
    __ULong carry, y, z, z2;
    __ULong *x, *xa, *xae, *xb, *xbe, *xc, *xc0;

    if (a->_wds < b->_wds) {
        c = a;
        a = b;
        b = c;
    }
    k = a->_k;
    wa = a->_wds;
    wb = b->_wds;
    wc = wa + wb;
    if (wc > a->_maxwds)
        k++;
    c = FUN_0880d3d0(ptr, k);
    for (x = c->_x, xa = x + wc; x < xa; x++)
        *x = 0;
    xa = a->_x;
    xae = xa + wa;
    xb = b->_x;
    xbe = xb + wb;
    xc0 = c->_x;
    for (; xb < xbe; xb++, xc0++) {
        if ((y = *xb & 0xffff) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            do {
                z = (*x & 0xffff) * y + (*xc & 0xffff) + carry;
                carry = z >> 16;
                z2 = (*x++ >> 16) * y + (*xc >> 16) + carry;
                carry = z2 >> 16;
                Storeinc(xc, z2, z);
            } while (x < xae);
            *xc = carry;
        }
        if ((y = *xb >> 16) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            z2 = *xc;
            do {
                z = (*x & 0xffff) * y + (*xc >> 16) + carry;
                carry = z >> 16;
                Storeinc(xc, z, z2);
                z2 = (*x++ >> 16) * y + (*xc & 0xffff) + carry;
                carry = z2 >> 16;
            } while (x < xae);
            *xc = z2;
        }
    }
    for (xc0 = c->_x, xc = xc0 + wc; wc > 0 && !*--xc; --wc)
        ;
    c->_wds = wc;
    return c;
}
