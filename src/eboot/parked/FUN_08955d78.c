/*
 * FUN_08955d78: classify command bytes 0x21 and 0x24..0x27 as 1, 0x23 as 3.
 *
 * Main EBOOT, attempt-high-01 batch 4. Command meanings and unused context are hypotheses.
 */

typedef unsigned char u8;

int FUN_08955d78(void *unused, u8 command)
{
    int result = 3;

    if (command != 0x23) {
        result = 0;
        if (command < 0x24) {
            if (command == 0x21)
                return 1;
        } else if (command < 0x28) {
            return 1;
        }
    }
    return result;
}
