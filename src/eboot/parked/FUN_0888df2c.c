/* Purpose: apply a seeded byte substitution and XOR stream to a buffer. */
extern void FUN_0888de6c(unsigned char *, unsigned int);
extern unsigned int FUN_0888dea8(unsigned char *);

static void substitute_word(unsigned char *word, const unsigned char *table)
{
    word[0] = table[word[0]];
    word[1] = table[word[1]];
    word[2] = table[word[2]];
    word[3] = table[word[3]];
}

void FUN_0888df2c(unsigned char *state, unsigned char *data,
                  unsigned int size, const unsigned char *table,
                  unsigned char seed_after_substitution)
{
    unsigned char *last = data + size - 4;
    unsigned char *cursor;

    if (!seed_after_substitution)
        FUN_0888de6c(state, *(unsigned int *)last);
    substitute_word(last, table);
    substitute_word(last, table);
    if (seed_after_substitution)
        FUN_0888de6c(state, *(unsigned int *)last);

    for (cursor = data; cursor < last; cursor += 4) {
        substitute_word(cursor, table);
        *(unsigned int *)cursor ^= FUN_0888dea8(state);
        substitute_word(cursor, table);
    }
}
