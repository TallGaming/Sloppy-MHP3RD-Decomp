/* Purpose: test the observed local-record wrapper as a natural Group B C candidate. */
typedef unsigned char u8;
typedef unsigned short u16;

struct Local0885aa60 {
    u16 mode;
    u8 remaining[22];
};

void FUN_0885a338();
void FUN_0885a7ec();

void FUN_0885aa60(void)
{
    struct Local0885aa60 local = {0};

    local.mode = 0x100;
    FUN_0885a338(&local);
    FUN_0885a7ec(&local, 0x10000003);
}
