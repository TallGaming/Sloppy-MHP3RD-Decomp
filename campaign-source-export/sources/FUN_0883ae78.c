/*
 * Purpose: remove the first matching six-byte key from a four-record table.
 *
 * Hypothesis supported by one direct caller, the verified six-byte comparator,
 * and synthetic control probes.  Each table record is 168 bytes; a match is
 * cleared through the verified typed fill thunk.  The declared integer result
 * preserves the target's observed tail-call result path and its no-match 1;
 * caller use of that result still needs independent confirmation.
 */
typedef unsigned char u8;

extern void *D_09bf5250;
extern int FUN_088305b4(const void *left, const void *right);
extern void *FUN_088ebb10(void *destination, int value, unsigned int size);

int FUN_0883ae78(const void *key)
{
    u8 *record = (u8 *)D_09bf5250;
    int index;

    for (index = 0; index < 4; index++) {
        if (FUN_088305b4(record, key) == 0) {
            return (int)FUN_088ebb10(record, 0, 168);
        }
        record += 168;
    }
    return 1;
}
