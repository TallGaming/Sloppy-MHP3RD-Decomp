typedef unsigned char u8;
typedef unsigned short u16;

typedef struct State {
    u8 before_value[4];
    u16 value;
    u8 before_ready[3];
    u8 ready;
} State;

/* Purpose hypothesis: lazily initialize the shared state once. */
extern State D_08a291a0;
extern int FUN_088395b4(int, u16);

void FUN_0883a078(void)
{
    if (D_08a291a0.ready != 0) {
        return;
    }

    if (FUN_088395b4(19, D_08a291a0.value) != 0) {
        D_08a291a0.ready = 1;
    }
}
