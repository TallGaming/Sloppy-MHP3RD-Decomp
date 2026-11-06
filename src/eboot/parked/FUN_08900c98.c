/* FUN_08900c98: draw a page frame, optional navigation controls and counter.
 * Main EBOOT, attempt-high-01 513-1024 byte batch 1. UI roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned int u32;
extern void *D_09beb0bc; extern void *D_09be9f18;
extern u8 D_089fcc3c[]; extern u8 D_089f9574[];
extern int D_089f9b80, D_089f9ca0;
void FUN_0890000c(void *, void *, int, int);
void FUN_08900bf0(void *, void *, void *, int, int, int, int, int);
u32 FUN_088fabf4(void *, void *, int, int);
void FUN_088e6ff0(void *, int, int);
void FUN_088fa990(void *, int, int, int, int, int, int);

void FUN_08900c98(int *state, u32 page, u32 count, void *panel, short x, short y)
{
    int type;
    int offset;
    u32 position;

    page &= 0xffff; count &= 0xffff;
    if (count < 2) return;
    type = state[0];
    if (state[2] == 0) {
        switch (type) {
        case 0: case 1: case 2: case 3:
            if ((signed char)state[0x55] == 1 || page != 0) {
                FUN_0890000c(state + 0x2c, panel, x, y);
                if ((((u8 *)state)[0xd] & 1) != 0)
                    FUN_0890000c(state + 4, panel, x, y);
            }
            if ((signed char)state[0x55] == 1 || page < count - 1) {
                FUN_0890000c(state + 0x40, panel, x, y);
                if ((((u8 *)state)[0xd] & 2) != 0)
                    FUN_0890000c(state + 0x18, panel, x, y);
            }
            break;
        case 4: case 5: case 6:
            FUN_0890000c(state + 4, panel, x, y);
            FUN_0890000c(state + 0x18, panel, x, y);
            break;
        case 7:
            FUN_08900bf0(D_09beb0bc, &D_089f9b80, panel, 4, 0, x, y, 0);
            FUN_0890000c(state + 4, panel, x, y);
            FUN_0890000c(state + 0x18, panel, x, y);
            break;
        case 8:
            FUN_08900bf0(D_09beb0bc, &D_089f9ca0, panel, 4, 0, x, y, 0);
            FUN_0890000c(state + 4, panel, x, y);
            FUN_0890000c(state + 0x18, panel, x, y);
            break;
        }
    }
    offset = D_089fcc3c[type] * 0x24;
    position = FUN_088fabf4(D_089f9574 + offset, panel, x, y);
    FUN_088e6ff0(D_09be9f18,
                 (*(short *)(D_089f9574 + offset + 4) -
                  *(short *)(D_089f9574 + offset)) & 0xff,
                 (*(short *)(D_089f9574 + offset + 6) -
                  *(short *)(D_089f9574 + offset + 2)) & 0xff);
    FUN_088fa990(D_09beb0bc, (short)position, (short)(position >> 16),
                 page, count, 1, (signed char)state[3]);
}
