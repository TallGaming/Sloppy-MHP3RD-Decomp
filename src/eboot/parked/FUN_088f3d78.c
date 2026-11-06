/* Mark and test four secondary flags. PARKED: initial plain-C attempt. */
int FUN_088f3d78(char*p){int i;char*g=*(char**)0x08aace80+0x30;for(i=0;i<4;i++,g+=0xfc)if(!*g)p[0x3c+i]=1;for(i=0;i<4;i++)if(!p[0x3c+i])return 0;return 1;}
