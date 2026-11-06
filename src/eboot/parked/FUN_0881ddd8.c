/*
 * Purpose: retain the public unwind-runtime semantic witness for
 * FUN_0881ddd8.  This is an uncompiled field/ABI view, not a candidate.
 * Its type names and operations come from the unchanged GCC 4.0.4
 * unwind-dw2.c context.  The target needs caller and relocation evidence
 * before it can be attributed to this implementation.
 */

struct UnwindContext {
    void *reg[DWARF_FRAME_REGISTERS + 1];
    void *cfa;
    /* intervening public-layout fields omitted from this field view */
    unsigned long args_size;
};

extern void *UnwindGetGRPtr(struct UnwindContext *context, int column);
extern void UnwindSetSpColumn(struct UnwindContext *context, void *cfa,
                              void *temporary_sp);
extern void *UnwindGetPtr(struct UnwindContext *context, int column);
extern void memcpy(void *dst, const void *src, unsigned int count);
extern unsigned char dwarf_reg_size_table[];

union UnwindSpTmp {
    unsigned long ptr;
    unsigned long word;
};

/* Public-source witness corresponding to uw_install_context_1. */
static long FUN_0881ddd8_public_semantic_view(struct UnwindContext *current,
                                               struct UnwindContext *target)
{
    long i;
    union UnwindSpTmp sp_slot;

    if (!UnwindGetGRPtr(target, __builtin_dwarf_sp_column()))
        UnwindSetSpColumn(target, target->cfa, &sp_slot);

    for (i = 0; i < DWARF_FRAME_REGISTERS; ++i) {
        void *current_reg = current->reg[i];
        void *target_reg = target->reg[i];
        if (target_reg && current_reg && target_reg != current_reg)
            memcpy(current_reg, target_reg, dwarf_reg_size_table[i]);
    }

    if (!UnwindGetGRPtr(current, __builtin_dwarf_sp_column())) {
        void *target_cfa = UnwindGetPtr(target, __builtin_dwarf_sp_column());
#if STACK_GROWS_DOWNWARD
        return (long)((char *)target_cfa - (char *)current->cfa) + target->args_size;
#else
        return (long)((char *)current->cfa - (char *)target_cfa) - target->args_size;
#endif
    }
    return 0;
}
