/* Purpose: select a saved network record by index and publish its two-word identity. */
extern void FUN_08835764(int, void *, int);
extern void LAB_088878dc(void);

int FUN_088874dc(int object, unsigned int index)
{
    int offset = (index & 0xff) * 0x90;
    int record_base = object + offset;
    unsigned int first;

    *(unsigned int *)(object + 0x1bb8) = *(unsigned int *)(object + 0x1bb8) | 0x200;
    FUN_08835764(object + offset + 0x1bd4, LAB_088878dc, object);
    first = *(unsigned int *)(record_base + 0x1bd4);
    *(unsigned int *)(object + 0x1bc4) = *(unsigned int *)(record_base + 0x1bd8);
    *(unsigned int *)(object + 0x1bc0) = first;
    return object + 0x1bc0;
}
