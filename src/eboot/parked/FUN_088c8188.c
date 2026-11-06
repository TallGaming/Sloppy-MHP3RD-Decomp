/* Publish a float, build a temporary query, and submit its result. */
void FUN_088c80a4(void);void FUN_088c4a24(void*,int,int);
void FUN_088c8188(float value,char*base){int result;*(float*)(base+0x727de8)=value;FUN_088c80a4();FUN_088c4a24(base,result,*(int*)(base+0x727d50));}
