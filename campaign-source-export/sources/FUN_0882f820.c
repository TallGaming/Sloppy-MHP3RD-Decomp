/*
 * FUN_0882f820: partially recovered record eligibility predicate.
 *
 * The validator result is tested first and directly contributes to the
 * boolean result.  The later record-field predicates are not represented:
 * their offsets and relation are not yet supported.  D_08a29258 is only a
 * tentative fixed-context binding from adjacent validator use.
 */
typedef unsigned char u8;

extern int FUN_088305b4(void *context, const void *record);
extern u8 D_08a29258[];

int FUN_0882f820(const void *record)
{
    return FUN_088305b4(D_08a29258, record) != 0;
}
