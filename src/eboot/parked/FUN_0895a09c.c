/* FUN_0895a09c: draw an enabled item icon through the current transform.
 * Main EBOOT, attempt-high-01 241-512 byte batch 23. Item roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *D_08aace80;
extern void *D_08ab1568;
extern void *D_09be9f18;
extern void *D_09beb0bc;
void *FUN_0886cae0(void *, int);
int FUN_0887efb4(void *, int);
void FUN_088e7048(void *, int);
u32 FUN_088fb754(void *, void *, void *);
void FUN_088e6ff0(void *, int, int);
int FUN_08867d54(void *, int);
void FUN_088eb2e4(void *, int, int, int);

void FUN_0895a09c(u8 *item, u8 **node)
{
    short *info;
    short *style;
    u8 *transform;
    short x;
    short y;
    u32 alpha;
    u16 id;

    if (*(void **)(item + 4) == 0) return;
    id = *(u16 *)(item + 8);
    info = FUN_0886cae0(D_08aace80, id);
    if (info[1] <= 0 || info[0] == 0 ||
        (*(u8 *)(FUN_0887efb4(D_08ab1568, id) + 3) & 8) == 0) return;
    FUN_088e7048(D_09be9f18, 0);
    style = (short *)node[0];
    transform = (u8 *)node[1];
    x = style[0xc] + *(short *)(node + 4);
    y = style[0xd] + *(short *)((u8 *)node + 0x12);
    if (transform == 0) alpha = ((u8 *)style)[0x17] << 24;
    else {
        x += *(short *)(transform + 0x18);
        y += *(short *)(transform + 0x1a);
        alpha = FUN_088fb754(D_09beb0bc, style + 10, transform + 0x14);
    }
    if ((alpha & 0xff000000) != 0) {
        FUN_088e6ff0(D_09be9f18, (style[2] - style[0]) & 0xff,
                     (style[3] - style[1]) & 0xff);
        FUN_088eb2e4(D_09be9f18, x, y,
                     FUN_08867d54(D_08aace80, **(u16 **)(item + 4)));
    }
}
