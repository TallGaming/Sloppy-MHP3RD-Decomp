/* Purpose: update global event flags or notify each registered event callback. */
extern unsigned int D_08aad2fc;
extern int D_08aad300;
extern int DAT_08aad304[];
typedef void (*EventCallback)(int, int, int);

void FUN_0887b1e0(int event, int value)
{
    int index;
    if (event == 1) {
        D_08aad300 = 0;
        D_08aad2fc |= 2;
    } else if (event == 2) {
        D_08aad300 = 0;
        D_08aad2fc |= 4;
    } else if (event == 0) {
        D_08aad300 = value;
        for (index = 0; index < 8; index++) {
            EventCallback callback = (EventCallback)DAT_08aad304[index * 2];
            if (callback != 0)
                callback(value, 8, DAT_08aad304[index * 2 + 1]);
        }
    } else if (event == 3) {
        for (index = 0; index < 8; index++) {
            EventCallback callback = (EventCallback)DAT_08aad304[index * 2];
            if (callback != 0)
                callback(0, 7, DAT_08aad304[index * 2 + 1]);
        }
    }
}
