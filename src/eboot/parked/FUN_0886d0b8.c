/*
 * Purpose: initialize four bytes of an output record from inputs and a query.
 * Hypothesis: the query fills a local halfword and two adjacent bytes.
 */
extern void FUN_08960f38(void *result);

#define FIELD(base, type, offset) (*(type *)((unsigned char *)(base) + (offset)))

void FUN_0886d0b8(unsigned int unused, void *record,
                  unsigned short first, unsigned short second)
{
    struct QueryResult {
        unsigned short half;
        unsigned char byte_at_2;
        unsigned char padding;
        unsigned char byte_at_4;
    } query;

    (void)unused;
    FIELD(record, unsigned short, 4) = first;
    FIELD(record, unsigned short, 6) = second;
    FUN_08960f38(&query);
    FIELD(record, unsigned char, 1) = query.byte_at_2;
    FIELD(record, unsigned short, 2) = query.half;
    FIELD(record, unsigned char, 0) = query.byte_at_4;
}
