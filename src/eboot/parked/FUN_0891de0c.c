/* FUN_0891de0c: classify a resource code into one of eleven display groups.
 * Main EBOOT, attempt-high-01 241-512 byte batch 9. Display roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;extern void *D_08aace80;u16 FUN_088692b4(void*,u16);
void FUN_0891de0c(u8 *out,u8 *record){u16 code=FUN_088692b4(D_08aace80,*(u16 *)(record+0x60));u8 group;switch(code){case 1:case 0x13:case 0x15:case 0x1b:case 0x20:case 0x21:group=1;break;case 6:group=3;break;case 7:group=2;break;case 8:case 0xf:case 0x12:case 0x14:case 0x1a:case 0x1d:case 0x1f:group=4;break;case 9:group=7;break;case 0x10:group=10;break;case 0x11:group=5;break;case 0x16:case 0x19:group=6;break;case 0x17:group=9;break;case 0x1e:group=8;break;default:group=0;break;}out[0x34]=group;}
