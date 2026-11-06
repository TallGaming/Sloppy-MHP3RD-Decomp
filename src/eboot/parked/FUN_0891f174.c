/*
 * FUN_0891f174: reset global and local state around a virtual method call.
 *
 * Main EBOOT, attempt-high-01 batch 2. The global object and method signature are hypotheses.
 */

typedef unsigned char u8;

extern u8 *D_08aace80;
void FUN_0891f154();

void FUN_0891f174(u8 *record)
{
    void *object;
    u8 *table;
    void (*method)(void);

    FUN_0891f154();
    D_08aace80[0x0e] = 0;
    object = *(void **)0x09bf524c;
    table = *(u8 **)object;
    method = *(void (**)(void))(table + 0x7c);
    method();
    record[0xb92] = 0;
    record[0xb91] = 0;
}
