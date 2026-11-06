typedef unsigned short u16;
typedef unsigned int u32;

typedef struct Parameters {
    u32 words[6];
} Parameters;

typedef struct CallData {
    Parameters parameters;
    void *value;
} CallData;

/*
 * Purpose hypothesis: prepare a shared parameter block and invoke its helper.
 *
 * Parked after 24-byte byte-array and word-aligned aggregate copies. The
 * word-aligned form matches every stack store, overwrite, call, and epilogue,
 * but GCC emits the frame/prologue before global loads; the reference loads all
 * six words first. D_08965eb8 also needs an absolute declaration in symbols.s.
 * Revisit for a source form that allows the reference prologue scheduling.
 */
extern Parameters D_08965eb8;
extern void FUN_0885acac(CallData *);

void FUN_0885ada0(void *value)
{
    CallData data;

    data.parameters = D_08965eb8;
    data.value = value;
    *(u16 *)&data.parameters = 0x100;
    FUN_0885acac(&data);
}
