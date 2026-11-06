/* Purpose: validate and copy a six-byte record prefix from an input window.
 * Contract recovered from its Region B callers: return zero when the window
 * cannot supply a usable prefix, return -6 for the reserved prefix value 6,
 * otherwise return the unsigned prefix byte after optionally copying the six
 * prefix bytes to output.  A prefix below 6 reports local state code 5.
 */
typedef unsigned char u8;

extern void *FUN_088ebb18(void *destination, const void *source, int count);
extern void FUN_08826f6c(void *state, int code, int detail);

int FUN_08826fa4(void *state, const u8 *input, int input_count, u8 *output) {
    u8 prefix[6];
    int remaining;
    int record_count;

    if (input_count <= 0) {
        return 0;
    }
    if (input_count < 6) {
        return 0;
    }

    remaining = input_count - 6;
    FUN_088ebb18(prefix, input, 6);
    record_count = prefix[0];
    if ((unsigned int)record_count < 6U) {
        FUN_08826f6c(state, 5, record_count);
        return 0;
    }

    record_count -= 6;
    if (record_count == 0) {
        return -6;
    }
    if (remaining <= 0) {
        return 0;
    }
    if (remaining < record_count) {
        return 0;
    }

    if (output != 0) {
        FUN_088ebb18(output, prefix, 6);
    }
    return prefix[0];
}
