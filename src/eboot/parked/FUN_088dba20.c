/*
 * FUN_088dba20: select a sound entry, configure its handle, and cache a result.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: selected-entry configuration remains one instruction short and different.
 */
typedef unsigned short u16; int FUN_088db958(void *,u16); void FUN_088ed380(int,int,int); int FUN_088ed594(int);
void FUN_088dba20(unsigned char *owner,int index,u16 value){int *slot=(int *)(owner+index*0x24);int selected=FUN_088db958(owner,value);unsigned char *entry=owner+selected*0x10+0x40;slot[1]=selected;if(selected!=-1){FUN_088ed380(slot[0],*(int *)(entry+8),*(int *)(entry+0x10));slot[2]=FUN_088ed594(slot[0]);}}
