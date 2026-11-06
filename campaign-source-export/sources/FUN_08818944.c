/* Purpose: return the fixed private fallback-object address only while the
 * adjacent state slot is clear.  The wrapper is intentionally not attributed
 * to a public libsupc++ getter: its inverse occupied-slot test and its callers
 * do not establish the GCC EH TLS/key/once configuration or global ownership.
 * Hypothesis: D_0896c454 is the private state slot; D_08a204f0 is its fallback.
 */
extern void *D_0896c454;
extern unsigned char D_08a204f0;

void *FUN_08818944(void) {
    if (D_0896c454 != 0) {
        return 0;
    }
    return &D_08a204f0;
}
