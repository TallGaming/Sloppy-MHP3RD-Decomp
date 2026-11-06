/* FUN_08931fb4: assemble stack-local descriptors for a status panel.
 * Main EBOOT, attempt-high-01 241-512 byte batch 15. Descriptor roles are hypotheses. */
typedef unsigned char u8;

extern u8 *D_08aace80;
extern void *D_08aacea4;
extern void *D_09beb0bc;
extern void *PTR_LAB_0896b428;
extern void *PTR_LAB_0896b368;
extern void *PTR_LAB_0896b3f8;
extern u8 D_08a0b08a;
extern u8 D_08a0b086;
extern u8 D_08a0b088;
extern u8 D_08a0b084;
extern u8 D_08a0b0d0;
extern u8 D_08a0b0cc;
extern u8 D_08a0b0d2;
extern u8 D_08a0b0ce;
extern void *D_08a0b0a4;
extern void *D_08a0b0c8;
extern void *D_08a0af60;
extern void *D_08a0b0ec;
extern int D_08a0af40;
extern int D_08a0af1c;

int FUN_08920c9c(void);
int FUN_09c62c00(void *, int);
int FUN_08867d40(void *, int);
void FUN_08900bf0(void *, void *, void *, int, int, int, int, int);

void FUN_08931fb4(u8 *state)
{
    void *local_40;
    void *local_3c;
    void *local_38;
    int local_34;
    signed char local_30;
    signed char local_2f;
    u8 local_2e;
    int local_2c;
    signed char local_28;
    void *local_24;
    int local_20;
    signed char local_1c;
    signed char local_1b;
    u8 local_1a;
    int local_18;
    u8 local_14;

    local_34 = FUN_09c62c00(D_08aacea4,
                            FUN_08920c9c() == 0 ? 0xcd : 0xce);
    D_08a0b0a4 = &local_38;
    D_08a0b0c8 = &local_3c;
    local_2f = (signed char)D_08a0b08a - (signed char)D_08a0b086;
    local_28 = local_2f + 2;
    local_30 = (signed char)D_08a0b088 - (signed char)D_08a0b084;
    local_3c = &PTR_LAB_0896b428;
    local_38 = &PTR_LAB_0896b368;
    local_2c = 1;
    local_40 = &PTR_LAB_0896b3f8;
    local_2e = 0;
    D_08a0af60 = &local_40;
    local_20 = FUN_08867d40(D_08aace80, (signed char)state[0x1c4] + 0x17);
    local_1c = (signed char)D_08a0b0d0 - (signed char)D_08a0b0cc;
    local_1b = (signed char)D_08a0b0d2 - (signed char)D_08a0b0ce;
    D_08a0b0ec = &local_24;
    local_24 = &PTR_LAB_0896b368;
    local_18 = 1;
    local_1a = 0;
    local_14 = 0;
    FUN_08900bf0(D_09beb0bc, &D_08a0af40, &D_08a0af1c, 0xc, 0, 0, 0, 0);
}
