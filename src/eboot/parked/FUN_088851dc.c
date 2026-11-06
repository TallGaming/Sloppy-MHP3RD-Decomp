/* Purpose: initialize a record from an identifier pair and associated value. */
extern void FUN_08885048(void*);
void FUN_088851dc(unsigned char*out,const unsigned int*pair,unsigned int value){FUN_08885048(out);out[0]=1;*(unsigned int*)(out+4)=value;*(unsigned int*)(out+0x20)=1;*(unsigned int*)(out+0x18)=pair[0];*(unsigned int*)(out+0x1c)=pair[1];}
