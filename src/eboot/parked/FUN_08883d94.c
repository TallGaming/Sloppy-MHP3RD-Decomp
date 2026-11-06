/* Purpose: emit three render-state records for one indexed material bank. */
extern unsigned int *D_08a31e88;
extern void FUN_08883d94_emit_record(unsigned int *, const unsigned char *,
                                     const unsigned char *, int);
extern void FUN_08883d94_emit_tail(unsigned int *);

void FUN_08883d94(unsigned char *state, char bank)
{
    unsigned char *material = state + bank * 0x80 + 0x10;
    unsigned int *cursor = D_08a31e88;
    int i;

    for (i = 0; i < 3; i++) {
        FUN_08883d94_emit_record(cursor, material + 0x10 + i * 0x20,
                                 material + 0x70, i);
        cursor += 6;
    }
    FUN_08883d94_emit_tail(cursor);
    D_08a31e88 = cursor + 2;
}
