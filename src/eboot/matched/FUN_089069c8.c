typedef unsigned char u8;
typedef unsigned int u32;

typedef struct PackedWord {
    u32 value;
} __attribute__((packed)) PackedWord;

/*
 * Purpose hypothesis: copy an unaligned word into an indexed record field.
 * PackedWord expresses the unaligned source access without inline assembly.
 */
void FUN_089069c8(void *records, u32 index, const void *source)
{
    *(u32 *)((u8 *)records + ((index & 0xff) * 4) + 140) =
        ((const PackedWord *)source)->value;
}
