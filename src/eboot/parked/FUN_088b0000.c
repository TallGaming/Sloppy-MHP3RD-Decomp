/*
 * FUN_088b0000: destroy seven embedded objects, then run the base destructor.
 *
 * Main EBOOT, non-G2 group-B medium attempt. Names and types are hypotheses.
 * PARKED: vtables lack symbols and reverse destructor loop is shorter.
 */
typedef unsigned char u8; typedef void (*Destroy)(void *); extern u8 D_0896ad30,D_0896ac58; void FUN_088a0a70(void *);
void FUN_088b0000(u8 *o){int i;*(void **)o=&D_0896ad30;*(void **)(o+0x1360)=&D_0896ac58;
 if(o!=(u8 *)0xfffff090)for(i=6;i>=0;i--){u8 *p=o+0xef0+i*0x80;((Destroy)**(void ***)p)(p);}FUN_088a0a70(o);}
