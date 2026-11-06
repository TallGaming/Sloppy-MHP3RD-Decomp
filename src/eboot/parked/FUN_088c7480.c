/*
 * FUN_088c7480: map a requested table entry through four owner slots.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: absolute table addressing and loop allocation differ despite exact size.
 */
typedef unsigned char u8; typedef short s16; extern s16 D_09d7c270[];
int FUN_088c7480(u8 *owner,int index){int i=0;u8 *map=owner+0x727de4;s16 *result=(s16 *)(owner+0x727ddc);do{if(D_09d7c270[map[i]*4]==D_09d7c270[index*4])return result[i];i++;}while(i!=4);return 0;}
