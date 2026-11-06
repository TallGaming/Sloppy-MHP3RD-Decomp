/*
 * FUN_088bd510: rebuild one four-bit occupancy mask from populated records.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: occupancy-mask pointer selection remains shorter and differently allocated.
 */
typedef unsigned char u8; extern u8 *D_08aace80;
void FUN_088bd510(u8 *owner,char alternate){int i=0,off=0;u8 *mask=owner+(alternate?0x21e4:0x21e3);*mask=0;do{if(D_08aace80[off+0x30])*mask|=1u<<i;i++;off+=0xfc;}while(i!=4);}
