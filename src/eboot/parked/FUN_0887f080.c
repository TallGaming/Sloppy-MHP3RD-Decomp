/* Purpose: sort paired 16-bit records by key and then signed secondary value. */
void FUN_0887f080(unsigned short *records, unsigned int count)
{
    unsigned int gap;
    unsigned int at;

    if (count <= 1)
        return;
    gap = 1;
    do {
        gap = gap * 3 + 1;
    } while (gap < count);
    gap /= 3;

    while ((int)gap > 0) {
        int base = 0;
        for (at = gap; at < count; at++) {
            unsigned short key = records[at * 2];
            unsigned short value = records[at * 2 + 1];
            int scan;

            for (scan = base; scan >= 0; scan -= gap) {
                unsigned short prior_key = records[scan * 2];
                if (prior_key < key ||
                    (prior_key == key && (short)records[scan * 2 + 1] <= (short)value))
                    break;
                records[(scan + gap) * 2] = prior_key;
                records[(scan + gap) * 2 + 1] = records[scan * 2 + 1];
            }
            records[(scan + gap) * 2] = key;
            records[(scan + gap) * 2 + 1] = value;
            base++;
        }
        gap /= 3;
    }
}
