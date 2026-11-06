/* Map the global controller mode into three compact state bytes. */
extern char*D_09bc1ed8;
void FUN_088a2c58(char*p){switch(*(int*)(D_09bc1ed8+0x10fa34c)){default:p[0x75]=0;p[0x76]=0;break;case 1:p[0x76]=1;p[0x75]=1;break;case 2:p[0x75]=4;p[0x76]=1;break;case 3:p[0x75]=2;p[0x76]=1;break;case 4:p[0x75]=3;p[0x76]=1;break;case 5:p[0x75]=5;p[0x76]=1;break;case 6:p[0x75]=9;p[0x76]=0;}switch(p[0x75]){case 0:p[0x77]=1;return;case 1:p[0x77]=2;return;case 2:p[0x77]=3;return;case 3:p[0x77]=4;return;case 4:p[0x77]=5;return;case 5:p[0x77]=6;return;default:p[0x77]=0;return;}}
