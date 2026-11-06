/* FUN_08955b20: decrement a slot lifetime and release its three resources.
 * Main EBOOT, attempt-high-01 241-512 byte batch 22. Slot roles are hypotheses. */
typedef unsigned char u8;
void FUN_08878e64(void *, int);
void FUN_0889c050(void *);
void FUN_08878f78(void *);
void FUN_0889c088(void *);

void FUN_08955b20(u8 *object, unsigned int slot)
{
    u8 *status;
    u8 lifetime;

    slot &= 0xff;
    status = object + slot * 3;
    lifetime = object[0x880 + slot];
    if (lifetime == 0) return;
    object[0x880 + slot] = lifetime - 1;
    if (lifetime != 1) return;
    if (status[0x884] != 0) {
        FUN_08878e64(object, *(int *)(object + 0x89c + slot * 0x30));
        FUN_0889c050(object + 0x890 + slot * 0x30);
        status[0x884] = 0;
    }
    if (status[0x885] != 0) {
        FUN_08878e64(object, *(int *)(object + 0x9a8 + slot * 0x80));
        FUN_08878f78(object + 0x950 + slot * 0x80);
        status[0x885] = 0;
    }
    if (status[0x886] != 0) {
        FUN_08878e64(object, *(int *)(object + 0xb54 + slot * 0x10));
        FUN_0889c088(object + 0xb50 + slot * 0x10);
        status[0x886] = 0;
    }
}
