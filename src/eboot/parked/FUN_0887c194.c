/* Purpose: fan network status bits out to each registered listener. */
typedef void (*StatusCallback)(int, int, int);
typedef struct StatusListener {
    StatusCallback callback;
    int context;
} StatusListener;
extern StatusListener D_08aad304[8];

int FUN_0887c194(int unused, unsigned int status)
{
    StatusListener *listener;
    int i;

    (void)unused;
    if ((status & 0x80000) != 0) {
        listener = D_08aad304;
        i = 0;
        do {
            if (listener->callback != 0)
                listener->callback(0, 1, listener->context);
            listener++;
            i++;
        } while (i != 8);
    }
    if ((status & 0x10000) != 0) {
        listener = D_08aad304;
        i = 0;
        do {
            if (listener->callback != 0)
                listener->callback(0, 2, listener->context);
            listener++;
            i++;
        } while (i != 8);
    }
    if ((status & 0x20000) != 0) {
        listener = D_08aad304;
        i = 0;
        do {
            if (listener->callback != 0)
                listener->callback(0, 3, listener->context);
            listener++;
            i++;
        } while (i != 8);
    }
    if ((status & 0x40000) != 0) {
        listener = D_08aad304;
        i = 0;
        do {
            if (listener->callback != 0)
                listener->callback(0, 4, listener->context);
            listener++;
            i++;
        } while (i != 8);
    }
    if ((status & 0x100) != 0) {
        listener = D_08aad304;
        i = 0;
        do {
            if (listener->callback != 0)
                listener->callback(0, 5, listener->context);
            listener++;
            i++;
        } while (i != 8);
    }
    return 0;
}
