/* Purpose: map a category and table index to a lookup value, then submit it. */
extern unsigned short DAT_089c86ec[];
extern unsigned short DAT_089c8420[];
extern unsigned short DAT_089c82bc[];
extern unsigned short DAT_089c857c[];
extern unsigned short DAT_089c8640[];
extern unsigned short DAT_089c8180[];
extern unsigned short DAT_089c84e0[];
extern unsigned short DAT_089c8378[];
extern unsigned short DAT_089c8210[];
extern int FUN_08867cc0(int, int, unsigned short);

int FUN_08867e64(int object, short category, unsigned int index)
{
    index &= 0xffff;
    switch (category) {
    case 0: return FUN_08867cc0(object, 4, DAT_089c86ec[index]);
    case 1: return FUN_08867cc0(object, 6, DAT_089c8420[index]);
    case 2: return FUN_08867cc0(object, 8, DAT_089c82bc[index]);
    case 3: return FUN_08867cc0(object, 10, DAT_089c857c[index]);
    case 7: return FUN_08867cc0(object, 0x10, DAT_089c8640[index]);
    case 8: return FUN_08867cc0(object, 0x12, DAT_089c8180[index]);
    case 9: return FUN_08867cc0(object, 0x14, DAT_089c84e0[index]);
    case 11: return FUN_08867cc0(object, 0x18, DAT_089c8378[index]);
    case 12: return FUN_08867cc0(object, 0x1a, DAT_089c8210[index]);
    default: return 0;
    }
}
