/* FUN_0894f1c0: build the first category of priced list entries.
 * Main EBOOT, attempt-high-01 241-512 byte batch 20. Entry roles are hypotheses. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *D_09befbd4;
extern u8 *D_08aace80;
extern float D_0896a664;
extern float D_0896a668;
extern u16 D_089c7230;
void FUN_088ebb10(void *, int, int);
int FUN_0894af84(void *, int, u16);
u32 FUN_08943d58(void *, int, u16);
u32 FUN_088682d0(void *, u16);
int FUN_0894efa0(void *, int, u16);

void FUN_0894f1c0(u8 *state)
{
    u8 *entry = state + 0x18;
    u16 id;

    *(int *)(state + 0x658) = 0;
    FUN_088ebb10(entry, 0, 0x640);
    for (id = 1; id < D_089c7230; id++) {
        if (FUN_0894af84(state, 0, id) != 0) {
            float price = (float)FUN_08943d58(D_09befbd4, 0, id) * D_0896a664;
            *(u32 *)entry = price < D_0896a668
                                ? (u32)price
                                : ((u32)(price - D_0896a668) | 0x80000000);
            *(u32 *)(entry + 4) = FUN_088682d0(D_08aace80, id);
            entry[8] = FUN_0894efa0(state, 0, id) == 0;
            entry[9] = 0;
            *(u16 *)(entry + 10) = 0;
            *(u16 *)(entry + 12) = id;
            *(u16 *)(entry + 14) = id;
            entry += 16;
            (*(int *)(state + 0x658))++;
        }
    }
}
