/* Purpose: select a saved network record by identifier and publish a supplied identity pair. */
extern void *FUN_08886bc0(void *, const void *);
extern void FUN_08835764(void *, void *, void *);
extern void LAB_088878dc(void);

void FUN_088875b8(unsigned char *object, const unsigned int *identity)
{
    void *record;

    *(unsigned int *)(object + 0x1bb8) |= 0x200;
    record = FUN_08886bc0(object, identity);
    FUN_08835764(record, LAB_088878dc, object);
    *(unsigned int *)(object + 0x1bc0) = identity[0];
    *(unsigned int *)(object + 0x1bc4) = identity[1];
}
