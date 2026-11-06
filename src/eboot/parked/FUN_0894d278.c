/* FUN_0894d278: format and draw an optional record description.
 * Main EBOOT, attempt-high-01 241-512 byte batch 19. Text roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;

extern void *D_09beb0bc;
extern int D_08a186c8;
extern int D_0896a680;

void FUN_0880ea5c(void *, void *, int);
char *FUN_0880ec10(void *, int);
int FUN_0894ba9c(void *);
void FUN_0880e1d4(void *, void *, int);
void FUN_0880e818(void *, void *, int);
void FUN_08905a50(void *, int, void *, void *, int, int);
void FUN_08901ce0(void *, int, void *, int);

void FUN_0894d278(signed char *state)
{
    u8 text[256];
    char *marker;
    int record;
    u32 flags;

    if (*(void **)(state + 0x4b04) == 0) {
        return;
    }
    FUN_0880ea5c(text, *(void **)(state + 0x4b04), 0xff);
    marker = FUN_0880ec10(text, 0x24);
    if (marker != 0) {
        record = FUN_0894ba9c(state);
        FUN_0880e1d4(marker, &D_0896a680, *(int *)(state + 0x18 + record * 0x10));
        marker = FUN_0880ec10(*(void **)(state + 0x4b04), 0x24);
        FUN_0880e818(text, marker + 1, 0x100);
    }
    flags = *(u32 *)(state + 0x4b08);
    if ((flags & 2) != 0) {
        FUN_08905a50(D_09beb0bc, 1, &D_08a186c8, text,
                     state[0x15] == 1, -1);
    } else if ((flags & 4) != 0) {
        FUN_08905a50(D_09beb0bc, 1, &D_08a186c8, text, -1, -1);
    } else {
        FUN_08901ce0(D_09beb0bc, (flags & 1) ^ 1, text, 0);
    }
}
