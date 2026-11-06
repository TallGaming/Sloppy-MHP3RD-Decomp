/* FUN_0891e9fc: calculate two vectors and replicate them across ten slots.
 * Main EBOOT, attempt-high-01 small-medium batch 1. Vector roles are hypotheses. */
typedef struct{unsigned int x[4];} Vec4;void FUN_0891e910(void*,Vec4*,Vec4*);
void FUN_0891e9fc(unsigned char *record){int i;Vec4 first,second;Vec4 *left=(Vec4 *)(record+0x70);Vec4 *right=(Vec4 *)(record+0x110);FUN_0891e910(record,&first,&second);for(i=0;i<10;i++){left[i]=first;right[i]=second;}}
