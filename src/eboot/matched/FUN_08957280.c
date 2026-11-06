/* FUN_08957280: return an indexed subtable from a selected resource record.
 * Main EBOOT, attempt-high-01 medium batch 21. Resource role is a hypothesis. */
typedef unsigned short u16;extern unsigned char *D_08a31e84;int FUN_08864f48(int,int);
int FUN_08957280(int unused,int resource_index,int table_index){u16 *record=(u16 *)(D_08a31e84+resource_index*12);int resource=0;int table,result=0;if((record[0]&2)!=0)resource=*(int *)(record+2);table=FUN_08864f48(resource,7);if(table!=0)result=table+*(int *)(table+8+table_index*4);return result;}
