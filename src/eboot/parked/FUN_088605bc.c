/* Purpose: configure the selected slot, optionally binding it to a matching active entry. */
extern unsigned int D_08a29198;
extern unsigned char *D_09da9600;
extern void FUN_0882a374(unsigned int);
extern void FUN_0882a34c(unsigned int, unsigned char, void *, int);

void FUN_088605bc(int unused, unsigned char *request)
{
    int index;
    void *match = 0;

    (void)unused;
    if (request[5] != 0) {
        for (index = 0; index < 20; index++) {
            unsigned char *entry = *(unsigned char **)(D_09da9600 + 0x250 + index * 4);
            if (entry != 0 && (*(unsigned int *)(entry + 4) & 1) != 0 && entry[0x62] == request[5]) {
                match = entry;
                break;
            }
        }
        if (match == 0)
            return;
    }
    FUN_0882a374(D_08a29198);
    FUN_0882a34c(D_08a29198, request[4], match, 0);
}
