/* Copy the selected six-byte record into the shared snapshot. */
typedef struct AddressPrefix {
    unsigned int first;
    unsigned short last;
} AddressPrefix;

extern AddressPrefix D_08965388;
extern unsigned char D_08a2990c[6];
extern void FUN_088ebb18(void *destination, const void *source, unsigned int size);

void FUN_088301bc(unsigned char use_external, const void *record)
{
    AddressPrefix default_record = {D_08965388.first, D_08965388.last};
    unsigned char snapshot[6];

    if (use_external) {
        FUN_088ebb18(snapshot, record, sizeof(snapshot));
        FUN_088ebb18(D_08a2990c, snapshot, sizeof(snapshot));
    } else {
        FUN_088ebb18(snapshot, &default_record, sizeof(snapshot));
        FUN_088ebb18(D_08a2990c, snapshot, sizeof(snapshot));
    }
}
