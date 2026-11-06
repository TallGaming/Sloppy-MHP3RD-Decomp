/*
 * FUN_088eb180: build and submit a formatted command with four arguments.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: four-argument stack layout remains shorter and broadly different.
 */
typedef unsigned char u8;
void FUN_088e7008(void *, int, int);
void thunk_FUN_0880c468(void *, int, int);
void FUN_088e9c8c(void *, void *, int, void *, void *, int);
void FUN_088eab84(void *, int, void *);

void FUN_088eb180(void *owner, short x, short y, void *format,
                  void *a, void *b, void *c, void *d)
{
    u8 buffer[0x310];
    void **arguments = (void **)(buffer + 0x300);
    arguments[0] = a;
    arguments[1] = b;
    arguments[2] = c;
    arguments[3] = d;
    FUN_088e7008(owner, x, y);
    thunk_FUN_0880c468(buffer, 0, 0x300);
    FUN_088e9c8c(owner, buffer, 0x300, format, arguments, 1);
    FUN_088eab84(owner, -1, buffer);
}
