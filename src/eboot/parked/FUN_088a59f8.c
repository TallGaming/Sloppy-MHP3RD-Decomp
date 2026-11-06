/* Translate a compact external item code into its internal category. */
typedef unsigned short u16;

int FUN_088a59f8(void *unused, u16 code)
{
    (void)unused;
    switch (code) {
    case 95: return 1;
    case 96: return 2;
    case 97: return 3;
    case 98: return 4;
    case 99: return 5;
    case 100: return 6;
    case 101: return 7;
    case 102: return 8;
    case 103: return 9;
    case 104: return 10;
    case 105: return 11;
    case 106: return 12;
    case 107: return 13;
    case 108: return 14;
    case 109: return 15;
    case 110: return 16;
    case 111: return 17;
    case 112: return 18;
    case 113: return 19;
    case 114: return 20;
    case 115: return 21;
    case 116: return 22;
    case 117: return 23;
    case 118: return 24;
    case 119: return 25;
    case 120: return 26;
    case 121: return 27;
    case 122: return 28;
    case 123: return 29;
    case 124: return 30;
    case 125: return 31;
    case 126: return 32;
    case 127: return 33;
    case 128: return 34;
    case 131: return 1;
    case 132: return 5;
    case 133: return 2;
    case 134: return 3;
    case 135: return 4;
    case 136: return 7;
    case 137: return 6;
    default: return 0;
    }
}
