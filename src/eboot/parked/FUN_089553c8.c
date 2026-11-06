/* FUN_089553c8: destroy four banks of polymorphic manager entries.
 * Main EBOOT, attempt-high-01 241-512 byte batch 22. Bank roles are hypotheses. */
extern void *D_09bf5260;

void FUN_089553c8(char *object)
{
    char *entry;
    void ***table;
    void **methods;
    int count;

    entry = object + 0x4c50;
    table = (void ***)(object + 0x4c20);
    for (count = 0x100; count != 0; count--) {
        methods = *table;
        entry -= 0x30;
        table = (void ***)((char *)table - 0x30);
        ((void (*)(void *))methods[0])(entry);
    }
    entry = object + 0x1c50;
    table = (void ***)(object + 0x1c20);
    for (count = 0x52; count != 0; count--) {
        methods = *table;
        entry -= 0x30;
        table = (void ***)((char *)table - 0x30);
        ((void (*)(void *))methods[0])(entry);
    }
    entry = object + 0xb50;
    table = (void ***)(object + 0xad0);
    for (count = 4; count != 0; count--) {
        methods = *table;
        entry -= 0x80;
        table = (void ***)((char *)table - 0x80);
        ((void (*)(void *))methods[0])(entry);
    }
    entry = object + 2000;
    table = (void ***)(object + 0x750);
    for (count = 0xb; count != 0; count--) {
        methods = *table;
        entry -= 0x80;
        table = (void ***)((char *)table - 0x80);
        ((void (*)(void *))methods[0])(entry);
    }
    D_09bf5260 = 0;
}
