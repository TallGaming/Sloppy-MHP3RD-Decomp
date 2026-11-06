/* Purpose: retain verified dependency flow for the uncompiled target field view. */
typedef unsigned char u8;

struct SelectorObject0885be6c {
    u8 unknown_00;
    u8 selector;
    unsigned short index;
};

struct TypeRecord0883d290 {
    u8 leading[15];
    u8 kind;
};

/* The only real caller is not yet synthetically reachable, so target inputs remain unnamed. */
extern const u8 *FUN_0885be6c(void *unused_context,
                              const struct SelectorObject0885be6c *object);
extern int FUN_0883d290(void *unused_context, const u8 *membership_record,
                        const struct TypeRecord0883d290 *type_record);
extern int FUN_08867d40(void *context, unsigned short index);
extern void FUN_08904570(void *unused, unsigned short *record, int third,
                         u8 fourth, int fifth, short x, short y, int eighth,
                         u8 stack_byte);

/* Target entry declaration is withheld: the only real caller has not yielded a lane ABI. */
