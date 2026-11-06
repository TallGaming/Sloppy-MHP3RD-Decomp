/*
 * FUN_088d0758: copy two fixed blocks and three scalar fields into an owner record.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: explicit four-word copy loops remain two instructions longer and different.
 */
typedef unsigned int u32;
void FUN_088d0758(unsigned char *owner,unsigned char *source){u32 *s=(u32 *)(source+8),*d=(u32 *)(owner+0x198);do{u32 a=s[1],b=s[2],c=s[3];d[0]=s[0];s+=4;d[1]=a;d[2]=b;d[3]=c;d+=4;}while(s!=(u32 *)(source+0x48));*(u32 *)(owner+0x18c)=*(u32 *)(source+0x48);*(u32 *)(owner+0x190)=*(u32 *)(source+0x4c);*(u32 *)(owner+0x194)=*(u32 *)(source+0x50);s=(u32 *)(source+0x54);d=(u32 *)(owner+0x9c);do{u32 a=s[1],b=s[2],c=s[3];d[0]=s[0];s+=4;d[1]=a;d[2]=b;d[3]=c;d+=4;}while(s!=(u32 *)(source+0xc4));}
