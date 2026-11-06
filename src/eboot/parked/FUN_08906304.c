/* FUN_08906304: clear all fields and bounded arrays in a record.
 * Main EBOOT, attempt-high-01 241-512 byte batch 3. Field roles are hypotheses. */
typedef unsigned char u8;typedef unsigned short u16;void FUN_088ebb10(void*,int,int);
void FUN_08906304(u16 *r){r[0]=0;((u8*)r)[2]=0;((u8*)r)[3]=0;r[2]=0;r[3]=0;FUN_088ebb10(r+4,0,0x1a);FUN_088ebb10(r+0x11,0,0x1e);FUN_088ebb10(r+0x20,0,0x1a);r[0x2d]=0;((u8*)r)[0x5c]=0;((u8*)r)[0x5d]=0;((u8*)r)[0x5e]=0;((u8*)r)[0x5f]=0;FUN_088ebb10(r+0x30,0,8);FUN_088ebb10(r+0x34,0,6);FUN_088ebb10(r+0x37,0,6);FUN_088ebb10(r+0x3a,0,6);r[0x3d]=0;FUN_088ebb10(r+0x3e,0,0x10);FUN_088ebb10(r+0x46,0,0xc);((u8*)r)[0x9c]=0;((u8*)r)[0x98]=0;((u8*)r)[0x99]=0;((u8*)r)[0x9a]=0;((u8*)r)[0x9b]=0;}
