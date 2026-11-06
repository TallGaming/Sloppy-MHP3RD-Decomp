/* FUN_08955928: release a contiguous run from either entry bank.
 * Main EBOOT, attempt-high-01 241-512 byte batch 22. Bank roles are hypotheses. */
typedef unsigned char u8;
void FUN_09c01c04(void *);

void FUN_08955928(u8 *object, u8 *target, unsigned int count)
{
    u8 *entries = object + 0xcf0;
    u8 *flags = object + 0xb90;
    int index;
    int start = -1;

    for (index = 0; index != 0x52; index++, entries += 0x30) {
        if (entries == target) { start = index; break; }
    }
    entries = object + 0x1c50;
    for (index = 0; index != 0x100; index++, entries += 0x30) {
        if (entries == target) {
            start = index;
            entries = object + 0x1c50;
            flags = object + 0xbe2;
            break;
        }
    }
    if ((int)((count & 0xff) + start) <= start) return;
    entries += start * 0x30;
    flags += start;
    for (index = 0; index != (int)(count & 0xff); index++) {
        flags[index] = 0;
        FUN_09c01c04(entries + index * 0x30);
    }
}
