/*
 * FUN_0889ad3c: initialize queue subsystems, record slots, and a default request.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: several initialization globals lack symbols and the frame differs.
 */

typedef unsigned char u8;

typedef struct Request {
    int first;
    int second;
    int third;
    int fourth;
    int fifth;
    int sixth;
} Request;

extern u8 D_09bb7840;
extern u8 D_09bb7a40;
extern int D_09bb7a50;
void FUN_088999b0(void);
void FUN_088995b8(void);
void FUN_088992bc(void);
void FUN_0889a7cc(void *record);
void FUN_0889ace0(Request *request);

int FUN_0889ad3c(void)
{
    Request request;
    u8 *slot = &D_09bb7840;
    int i = 0;

    FUN_088999b0();
    FUN_088995b8();
    FUN_088992bc();
    FUN_0889a7cc(&D_09bb7a40);
    do {
        i++;
        FUN_0889a7cc(slot);
        slot += 0x10;
    } while (i != 32);
    D_09bb7a50 = 0;
    request.first = -1;
    request.fifth = 1;
    request.second = 0;
    request.third = 0;
    request.fourth = 0;
    request.sixth = 0;
    FUN_0889ace0(&request);
    return 0;
}
