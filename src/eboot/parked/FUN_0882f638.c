/*
 * FUN_0882f638: partially recovered record-dispatch precondition.
 *
 * The first call validates the supplied record against a fixed context.  The
 * remaining conditional dispatch and clearing operation need the owning
 * record layout and callback ABI, so this diagnostic deliberately does not
 * claim to be a whole candidate.  D_08a29258 is a tentative context binding
 * from adjacent validator use, not an ABI proof for the whole function.
 */
typedef unsigned char u8;

extern int FUN_088305b4(void *context, const void *record);
extern u8 D_08a29258[];

void FUN_0882f638(const void *record)
{
    if (FUN_088305b4(D_08a29258, record) == 0) {
        return;
    }
}
