/*
 * Readable exception-release hypothesis for the complete 136-byte target.
 * The observed range contains 32 emergency slots of 512 bytes. A pool
 * release clears its occupancy bit under the IRQ token protocol; a heap
 * release frees the allocation 80 bytes before its payload.
 * Public GCC4.0.4 eh_alloc.cc corroborates this algorithm. This C recovery
 * is not an unchanged public C++ translation unit and earns no C/library
 * credit. Address arithmetic below uses the recovered 32-bit PSP ABI.
 */
typedef unsigned int address_word;

extern unsigned char D_08a1c4f0[32][512];
extern unsigned int D_08a1c4e4;
extern unsigned int D_08a1c4e8;
extern int FUN_08960a50(void);
extern void FUN_08960a68(int state);
extern void FUN_0880b6e4(void *allocation);

void FUN_0881844c(void *payload)
{
    address_word address = (address_word)payload;
    address_word pool = (address_word)D_08a1c4f0;

    if (address < pool || address >= pool + sizeof(D_08a1c4f0)) {
        FUN_0880b6e4((unsigned char *)payload - 80);
        return;
    }

    {
        unsigned int slot = (address - pool) / sizeof(D_08a1c4f0[0]);
        int state = FUN_08960a50();
        D_08a1c4e4 &= ~(1u << slot);
        D_08a1c4e8 = (unsigned int)state;
        FUN_08960a68(state);
    }
}
