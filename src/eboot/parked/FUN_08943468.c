/* FUN_08943468: build a page and update its optional visibility state.
 * Main EBOOT, attempt-high-01 241-512 byte batch 16. Page roles are hypotheses. */
typedef unsigned int u32;

extern short D_08a10f18;
extern short D_08a10f1a;
extern int D_08a1108c;

void FUN_08942d54(void *, void *);
void FUN_08942768(void *, void *);
void FUN_0893db80(void *, void *);
void FUN_088fb378(void *, int, int);
void FUN_089029f4(void *);
int FUN_0883edc4(void *);
void FUN_08900c98(void *, int, int, void *, int, int);

void FUN_08943468(char *state, u32 page, void *data, u32 flags)
{
    int value;

    if (page == 1) {
        FUN_08942d54(state, data);
    } else if ((int)page < 2) {
        if (page == 0) {
            FUN_08942768(state, data);
        }
    } else if ((int)page < 6) {
        FUN_0893db80(state, data);
    }

    if ((flags & 1) != 0) {
        state += 1000;
        FUN_088fb378(state, 0, 1);
    } else {
        state += 1000;
        if ((flags & 2) != 0) {
            FUN_088fb378(state, 1, 1);
        }
    }
    FUN_089029f4(state);
    value = FUN_0883edc4(data);
    FUN_08900c98(state, page & 0xffff, value, &D_08a1108c,
                 D_08a10f18, D_08a10f1a);
}
