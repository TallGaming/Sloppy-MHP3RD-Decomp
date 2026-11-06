/* FUN_0894cd74: populate a record panel and its mode-specific footer.
 * Main EBOOT, attempt-high-01 241-512 byte batch 19. Panel roles are hypotheses. */
extern void *D_09beb0bc;
extern void *D_09e5e1a8;
extern int D_08a18ea8;
extern int D_08a18e84;
extern int D_08a18f14;
extern int D_08a18f38;
extern int D_08a18f5c;
extern int D_08a18f80;
extern int D_08a18fa4;

void FUN_08900bf0(void *, void *, void *, int, int, int, int, int);
int FUN_09c9aba0(void *, int);
void FUN_08904570(void *, void *, int, int, void *, int, int, int, int);
void *FUN_0894b32c(void *);
void *FUN_0890689c(void *);
void FUN_08901c48(void *, void *, void *, void *, int, void *, int, int, int);
int FUN_0890681c(void *, int);

void FUN_0894cd74(void *state)
{
    void *record;
    void *footer;
    int value;

    FUN_08900bf0(D_09beb0bc, &D_08a18ea8, &D_08a18e84, 3, 0, 0, 0, 0);
    value = FUN_09c9aba0(D_09e5e1a8, 0xd1);
    FUN_08904570(D_09beb0bc, &D_08a18f14, value, 0x19,
                 &D_08a18e84, 0, 0, 0, 0);
    record = FUN_0894b32c(state);
    if (record == 0) {
        return;
    }
    FUN_08901c48(D_09beb0bc, &D_08a18f38, &D_08a18f5c,
                 FUN_0890689c(record), 0, &D_08a18e84, 0, 0, 0);
    footer = &D_08a18f80;
    if (FUN_0890681c(record, 1) == 0) {
        footer = &D_08a18fa4;
        if (FUN_0890681c(record, 2) == 0) {
            return;
        }
    }
    FUN_08900bf0(D_09beb0bc, footer, &D_08a18e84, 1, 0, 0, 0, 0);
}
