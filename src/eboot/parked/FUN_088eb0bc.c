/*
 * FUN_088eb0bc: build and submit a formatted command with three arguments.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: argument-vector stack layout remains shorter and broadly different.
 */
typedef unsigned char u8;
void FUN_088e7008(void *, int, int);
void FUN_088e7048(void *, int);
void thunk_FUN_0880c468(void *, int, int);
void FUN_088e9c8c(void *, void *, int, void *, void *, int);
void FUN_088eab84(void *, int, void *);

void FUN_088eb0bc(void *owner, short x, short y, char mode, void *format,
                  void *a, void *b, void *c)
{
    u8 buffer[0x30c];
    void **arguments = (void **)(buffer + 0x300);
    arguments[0] = a;
    arguments[1] = b;
    arguments[2] = c;
    FUN_088e7008(owner, x, y);
    FUN_088e7048(owner, mode);
    thunk_FUN_0880c468(buffer, 0, 0x300);
    FUN_088e9c8c(owner, buffer, 0x300, format, arguments, 1);
    FUN_088eab84(owner, -1, buffer);
}
