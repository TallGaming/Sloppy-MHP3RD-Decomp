/*
 * Purpose: record the proven entry lanes and event-registration tail of the
 * network-record setup routine.
 *
 * This is an uncompiled partial ABI view, not a candidate implementation.
 * The two known game callers provide three integer/pointer lanes: a record
 * pointer, a code pointer used as the first registration context, and an
 * owning object pointer used as the second registration context. Synthetic
 * scalar execution reaches event slot 10 after a dependency-controlled path;
 * it passes a static callback, then those latter two incoming lanes to the
 * independently documented event registrar. The remaining branches, helper
 * identities, and result contract are unresolved.
 */
typedef void (*EventCallback)(void);

extern int FUN_08839da4(int index, EventCallback callback, void *first,
                        void *second);

void FUN_08835764(void *record, void *first_context, void *second_context);
