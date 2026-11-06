/*
 * FUN_0891cbec: summarize four active slots and choose the next alternate bit.
 *
 * Main EBOOT, attempt-high-01 medium batch 10. Slot and mask roles are hypotheses.
 */

typedef unsigned char u8;extern u8 *D_08aace80;
void FUN_0891cbec(u8 *record)
{unsigned active=0,index=0,offset=0,current=(1<<(D_08aace80[0x26]&31))&0xff;record[10]=0;record[9]=0;do{unsigned next=(1<<(index&31))|active;if(*(signed char *)(D_08aace80+offset+0x30)!=0){record[10]=(u8)next;record[9]++;active=next;}index++;offset+=0xfc;}while(index!=4);if(((active&0xff)&~current)!=0){unsigned choice=current;do{choice>>=1;if(choice==0)choice=8;if((choice&active&0xff)!=0){record[0xb]=(u8)choice;return;}}while(current!=choice);}}
