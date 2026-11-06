/* Purpose: translate backend event tuples into global flags and callback notifications. */
extern unsigned int D_08aad2fc;
extern int D_08aad300;
extern int DAT_08aad304[];
typedef void (*EventCallback)(int, int, int);

void FUN_0887b360(int type, int status, int event, int value)
{
    int index;

    if (type == 3 && status == 4) {
        D_08aad300 = 0;
        D_08aad2fc |= 2;
    }
    if (type == 4) {
        if (status != 0)
            return;
        if (event == 6) {
            D_08aad300 = value;
            for (index = 0; index < 8; index++) {
                EventCallback callback = (EventCallback)DAT_08aad304[index * 2];
                if (callback != 0)
                    callback(value, 8, DAT_08aad304[index * 2 + 1]);
            }
        } else {
            D_08aad300 = 0;
        }
    }
    if (status == 0 && event == 5)
        D_08aad2fc |= 4;
}
