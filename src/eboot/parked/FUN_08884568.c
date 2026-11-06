/* Purpose: emit three textured render-state records for a material. */
extern unsigned int *D_08a31e88;
extern unsigned int FUN_08884358(void *, int, int, unsigned char);
extern void FUN_08884568_emit_record(unsigned int *, const unsigned char *,
                                     const unsigned char *, unsigned int, int);
extern void FUN_08884568_emit_tail(unsigned int *);

void FUN_08884568(unsigned char *material, int selector, unsigned char mode)
{
    unsigned int *cursor = D_08a31e88;
    int i;

    for (i = 0; i < 3; i++) {
        unsigned int texture = FUN_08884358(material, selector, i, mode);
        FUN_08884568_emit_record(cursor, material + i * 0x20,
                                 material + 0x80, texture, i);
        cursor += 6;
    }
    FUN_08884568_emit_tail(cursor);
    D_08a31e88 = cursor + 1;
}
