/*
 * Purpose: readable partial for FUN_08818804 (0x08818804, 200 bytes).
 *
 * Source identity hypothesis: GCC 4.0.4 libsupc++/eh_globals.cc,
 * static get_globals_init_once().  The public source calls __gthread_once on
 * a function-local once object.  In this PSP build the gthread implementation
 * is inlined and uses a two-byte state object, interrupt masking, and a
 * 100-unit retry delay.  That platform header/implementation has not been
 * independently recovered, so this is not a compilable complete-TU or a
 * library-match claim.
 */
typedef int s32;
typedef unsigned char u8;

/* Observed storage roles: first byte is completion, second is initializer use. */
struct psp_once_state {
    u8 complete;
    u8 in_progress_count;
};

extern volatile s32 use_thread_key; /* starts negative; written by initializer */
extern struct psp_once_state get_globals_once;

/* Platform hooks: names are semantic placeholders pending import binding. */
extern unsigned int psp_interrupt_critical_enter(void);
extern void psp_interrupt_critical_leave(unsigned int token);
extern void psp_thread_delay(unsigned int delay_units);
extern void get_globals_init(void);

static void FUN_08818804_get_globals_init_once_partial(void)
{
    unsigned int token;

    if (get_globals_once.complete == 0) {
        token = psp_interrupt_critical_enter();
        get_globals_once.in_progress_count += 1;
        if (get_globals_once.in_progress_count == 1) {
            psp_interrupt_critical_leave(token);
            get_globals_init();
            get_globals_once.complete = 1;
        } else {
            psp_interrupt_critical_leave(token);
            while (get_globals_once.complete == 0) {
                psp_thread_delay(100);
                if (get_globals_once.complete == 0)
                    psp_thread_delay(100);
            }
        }
    }

    /* GCC 4.0.4 source: a failed or unavailable gthread setup falls back. */
    if (use_thread_key < 0)
        use_thread_key = 0;
}
