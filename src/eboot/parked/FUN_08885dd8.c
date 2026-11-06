/* Purpose: refresh the extended data for the peer matching the local identifier. */
extern unsigned char *D_08aace80;
extern void FUN_088314e4(void *);
extern void FUN_08870ebc(void *, void *);
extern void FUN_0880c088(void *, const void *, int);

void FUN_08885dd8(unsigned char *object)
{
    unsigned char local_id[8];
    unsigned char payload[292];
    unsigned char *state = *(unsigned char **)(object + 8);
    int count;
    int i;

    FUN_088314e4(local_id);
    count = *(signed char *)(state + 0x17af);
    for (i = 0; i < count; i++) {
        unsigned char *record = state + 0x810 + i * 0x14c;
        int byte;
        for (byte = 0; byte < 6; byte++)
            if (record[8 + byte] != local_id[byte])
                break;
        if (byte == 6) {
            FUN_08870ebc(D_08aace80, payload);
            FUN_0880c088(record + 0x30, payload, 0x120);
            return;
        }
    }
}
