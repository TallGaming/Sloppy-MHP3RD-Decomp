/* Apply a signed quantity change to an active item slot. */
typedef unsigned char u8; typedef unsigned short u16; typedef short s16;
extern u8 *D_08aace80; extern u8 D_089caf8c[];
u16 FUN_088a56fc(void *,u16); u16 FUN_0886ea58(void *,u16);
int FUN_088a574c(u8 *owner,u16 item,s16 delta)
{
    int i; s16 local,remote; u8 *slot;
    if (!((int(*)(void *))(*(void ***)owner)[77])(owner) || delta>0 || D_089caf8c[item*20+2]==0xff)
        return 0xff;
    local=(s16)FUN_088a56fc(owner,item); remote=(s16)FUN_0886ea58(D_08aace80,item);
    if (!(local|remote)) return 0xff;
    if ((u16)local<(u16)remote) { s16 gap=remote-local; if(gap < -delta) return 5; delta+=gap; }
    slot=owner+0x520;
    for(i=0;i!=24;i++,slot+=4) if(*(u16 *)slot==item) break;
    if(i==24) return 0;
    *(s16 *)(slot+2)+=delta;
    if(*(s16 *)(slot+2)>0) return 1;
    *(u16 *)slot=0; *(u16 *)(slot+2)=0; return 4;
}
