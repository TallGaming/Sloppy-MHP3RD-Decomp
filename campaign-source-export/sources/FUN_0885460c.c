/*
 * Partial command-100 reply layout for FUN_0885460c.
 *
 * The first argument is a writable five-word reply destination. The wrapper
 * submits an eight-byte request from its current stack base and copies the
 * first five words of the returned buffer. It initializes the first request
 * word only. The protocol meaning of the second word and the wrapper's
 * formal return type still need caller and handler evidence.
 */
typedef unsigned int u32;

struct AudioReply0885460c {
    u32 words[5];
};

